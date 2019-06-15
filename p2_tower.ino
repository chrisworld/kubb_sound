/*  Example applying an ADSR envelope to an audio signal
    with Mozzi sonification library.  This shows
    how to use an ADSR which updates at AUDIO_RATE, in updateAudio(),
    and output using next() at AUDIO_RATE in updateAudio().

    Another example in this folder shows an ADSR updating at CONTROL_RATE,
    which is more efficient, but AUDIO_RATE updates shown in this example
    enable faster envelope transitions.

    Demonstrates a simple ADSR object being controlled with
    noteOn() and noteOff() instructions.

    Mozzi documentation/API
    https://sensorium.github.io/Mozzi/doc/html/index.html

    Mozzi help/discussion/announcements:
    https://groups.google.com/forum/#!forum/mozzi-users

    Tim Barrass 2013, CC by-nc-sa.
*/

// P2 Tower Sound

#include <MozziGuts.h>
#include <Oscil.h>
#include <EventDelay.h>
#include <ADSR.h>

#include <tables/saw8192_int8.h>

#include <mozzi_rand.h>
#include <mozzi_midi.h>
#include <Smooth.h>

// Setup Oscillator
Oscil <8192, AUDIO_RATE> sawOscil(SAW8192_DATA);

// for triggering the envelope
EventDelay noteDelayP2;

// ADSR
ADSR <AUDIO_RATE, AUDIO_RATE> envP2;

// rythm
//int rythmP2[] = {500, 250, 375, 250, 250};
int rythmP2[] = {250, 375, 250, 375, 375};

int r2_max = 5;
int r2 = 0;

// setup P2 sound
void setupP2()
{
  randSeed();
  noteDelayP2.set(100);

  // choose envelope levels
  byte attack_level = 200;
  byte decay_level = 200;

  // set envelope params
  int attack = 50;
  int decay = 50;
  int sustain = 100;
  int release_ms = 50;
  
  // set ad levels
  envP2.setADLevels(attack_level, decay_level);

  // set envelope
  envP2.setTimes(attack, decay, sustain, release_ms);
}


// update tower of P2
void updateControlP2()
{
  unsigned int duration, attack, decay, sustain, release_ms;

  if (noteDelayP2.ready())
  {
    byte midi_note;

    // reset index of rythm
    if (r2 > r2_max)
    {
      r2 = 0;
    }

    int time_delay = rythmP2[r2];
    r2++;

    // on set of envelope
    envP2.noteOn();

    // tilted
    if (tower_standing)
    {
      // midi note
      midi_note = 62;
      time_delay = time_delay * 1.5;
    }
    else
    {
      // midi note
      midi_note = 50;
      time_delay = time_delay * 2;
    }

    // set freq
    sawOscil.setFreq((int)mtof(midi_note));

    // restart note after played
    noteDelayP2.start(time_delay);
  }
}


// get next sample
int updateAudioP2()
{
  envP2.update();
  return (int) (envP2.next() * sawOscil.next()) >> 8;
}
