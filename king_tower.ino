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

#include <tables/saw8192_int8.h>

#include <mozzi_rand.h>
#include <mozzi_midi.h>
#include <Smooth.h>

// Setup Oscillator
Oscil <8192, AUDIO_RATE> sawOscil(SAW8192_DATA);

// for triggering the envelope
EventDelay noteDelayKing;

// ADSR
ADSR <AUDIO_RATE, AUDIO_RATE> envKing;


// setup sound
void setupKing(){
  randSeed();
  noteDelayKing.set(2000);
}


// update tower sound
void updateControlKing()
{
  unsigned int duration, attack, decay, sustain, release_ms;

  if (noteDelayKing.ready())
  {
    // choose envelope levels
    byte attack_level = 200;
    byte decay_level = 200;
    envKing.setADLevels(attack_level, decay_level);

    // generate a random new adsr time parameter value in milliseconds
    unsigned int new_value = rand(300) + 100;

    // set envelope params
    attack = 50;
    decay = 100;
    sustain = 300;
    release_ms = 100;

    // set envelope
    envKing.setTimes(attack, decay, sustain, release_ms);
    envKing.noteOn();

    // midi note
    byte midi_note = 80;

    // set freq
    sawOscil.setFreq((int)mtof(midi_note));

    // restart note after played
    noteDelayKing.start(attack + decay + sustain + release_ms);
  }
}


// get next sample
int updateAudioKing()
{
  envKing.update();
  return (int) (envKing.next() * sawOscil.next()) >> 8;
}
