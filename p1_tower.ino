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

// P1 Tower Sound

#include <MozziGuts.h>
#include <Oscil.h>
#include <EventDelay.h>
#include <ADSR.h>

#include <tables/square_no_alias_2048_int8.h>

#include <mozzi_rand.h>
#include <mozzi_midi.h>
#include <Smooth.h>

// Setup Oscillator
Oscil <2048, AUDIO_RATE> squareOscil(SQUARE_NO_ALIAS_2048_DATA);

// for triggering the envelope
EventDelay noteDelayP1;

// ADSR
ADSR <AUDIO_RATE, AUDIO_RATE> envP1;

// rythm
int rythmP1[] = {500, 250, 500, 250};
int r_max = 4;
//int rythmP1[] = {750, 375, 375};
//int r_max = 3;

int r1 = 0;

// setup P1 sound
void setupP1()
{
  randSeed();
  noteDelayP1.set(100);

  // choose envelope levels
  byte attack_level = 200;
  byte decay_level = 200;

  // set envelope params
  int attack = 50;
  int decay = 50;
  int sustain = 100;
  int release_ms = 50;
  
  // set ad levels
  envP1.setADLevels(attack_level, decay_level);

  // set envelope
  envP1.setTimes(attack, decay, sustain, release_ms);
}


// update Tower of P1
void updateControlP1()
{
  if (noteDelayP1.ready())
  {
    byte midi_note;

    // reset index of rythm
    if (r1 >= r_max)
    {
      r1 = 0;
    }

    int time_delay = rythmP1[r1];
    r1++;

    // on set of envelope
    envP1.noteOn();

    // tilted
    if (tower_standing)
    {
      // midi note
      midi_note = 66;
      time_delay = time_delay * 1.5;
    }
    else
    {
      // midi note
      midi_note = 54;
      time_delay = time_delay * 2;
    }

    // set freq
    squareOscil.setFreq((int)mtof(midi_note));

    // restart note after played
    noteDelayP1.start(time_delay);
  }
}


// get next sample
int updateAudioP1()
{
  envP1.update();
  return (int) (envP1.next() * squareOscil.next()) >> 8;
}
