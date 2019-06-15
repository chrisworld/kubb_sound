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

#include <tables/triangle_warm8192_int8.h>

#include <mozzi_rand.h>
#include <mozzi_midi.h>
#include <Smooth.h>

// Setup Oscillator
Oscil <8192, AUDIO_RATE> triOscil(TRIANGLE_WARM8192_DATA);

// for triggering the envelope
EventDelay noteDelayP2;

// ADSR
ADSR <AUDIO_RATE, AUDIO_RATE> envP2;


// setup P2 sound
void setupP2(){
  randSeed();
  noteDelayP2.set(2000);
}


// update tower of P2
void updateControlP2()
{
  unsigned int duration, attack, decay, sustain, release_ms;

  if (noteDelayP2.ready())
  {
    // choose envelope levels
    byte attack_level = 200;
    byte decay_level = 200;
    envP2.setADLevels(attack_level, decay_level);

    // generate a random new adsr time parameter value in milliseconds
    unsigned int new_value = rand(300) + 100;

    // set envelope params
    attack = 50;
    decay = 100;
    sustain = 300;
    release_ms = 100;

    // set envelope
    envP2.setTimes(attack, decay, sustain, release_ms);
    envP2.noteOn();

    // midi note
    byte midi_note = 80;

    // set freq
    triOscil.setFreq((int)mtof(midi_note));

    // restart note after played
    noteDelayP2.start(attack + decay + sustain + release_ms);
  }
}


// get next sample
int updateAudioP2()
{
  envP2.update();
  return (int) (envP2.next() * triOscil.next()) >> 8;
}
