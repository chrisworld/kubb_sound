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


// setup P1 sound
void setupP1(){
  randSeed();
  noteDelayP1.set(2000);
}


// update Tower of P1
void updateControlP1()
{
  unsigned int duration, attack, decay, sustain, release_ms;

  if (noteDelayP1.ready())
  {
    // choose envelope levels
    byte attack_level = 200;
    byte decay_level = 200;
    envP1.setADLevels(attack_level, decay_level);

    // generate a random new adsr time parameter value in milliseconds
    unsigned int new_value = rand(300) + 100;

    // set envelope params
    attack = 50;
    decay = 100;
    sustain = 300;
    release_ms = 100;

    // set envelope
    envP1.setTimes(attack, decay, sustain, release_ms);
    envP1.noteOn();

    // midi note
    byte midi_note = 80;

    // set freq
    squareOscil.setFreq((int)mtof(midi_note));

    // restart note after played
    noteDelayP1.start(attack + decay + sustain + release_ms);
  }
}


// get next sample
int updateAudioP1()
{
  envP1.update();
  return (int) (envP1.next() * squareOscil.next()) >> 8;
}
