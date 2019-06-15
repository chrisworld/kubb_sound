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

// King Tower Sound

#include <MozziGuts.h>
#include <Oscil.h>
#include <EventDelay.h>
#include <ADSR.h>

#include <tables/triangle_warm8192_int8.h>

#include <mozzi_rand.h>
#include <mozzi_midi.h>
#include <Smooth.h>

// Setup Oscillator
Oscil <8192, AUDIO_RATE> triOscil(TRIANGLE_WARM8192_DATA);

// for triggering the envelope
EventDelay noteDelayKing;

// ADSR
ADSR <AUDIO_RATE, AUDIO_RATE> envKing;

// rythm
int rythmKing[] = {250, 250, 250, 250, 500};
int rk = 0;

// setup sound
void setupKing()
{
  randSeed();
  noteDelayKing.set(100);

  // choose envelope levels
  byte attack_level = 200;
  byte decay_level = 200;

  // set envelope params
  int attack = 50;
  int decay = 50;
  int sustain = 100;
  int release_ms = 50;
  
  // set ad levels
  envKing.setADLevels(attack_level, decay_level);

  // set envelope
  envKing.setTimes(attack, decay, sustain, release_ms);
}


// update tower sound
void updateControlKing()
{
  unsigned int duration, attack, decay, sustain, release_ms;

  if (noteDelayKing.ready())
  {
    byte midi_note;

    // reset index of rythm
    if (rk >= 5)
    {
      rk = 0;
    }

    int time_delay = rythmKing[rk];
    rk++;

    // on set of envelope
    envKing.noteOn();

    // tilted
    if (tower_standing)
    {
      // midi note
      midi_note = 69;
    }
    else
    {
      // midi note
      midi_note = 57;
      time_delay = time_delay * 2;
    }

    // set freq
    triOscil.setFreq((int)mtof(midi_note));

    // restart note after played
    noteDelayKing.start(time_delay);
  }
}


// get next sample
int updateAudioKing()
{
  envKing.update();
  return (int) (envKing.next() * triOscil.next()) >> 8;
}
