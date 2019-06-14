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

#include <MozziGuts.h>
#include <Oscil.h>
#include <EventDelay.h>
#include <ADSR.h>

#include <tables/sin8192_int8.h>
#include <tables/saw8192_int8.h>
#include <tables/triangle_warm8192_int8.h>
#include <tables/square_no_alias_2048_int8.h>

#include <mozzi_rand.h>
#include <mozzi_midi.h>
#include <Smooth.h>

Oscil <8192, AUDIO_RATE> aOscil(SIN8192_DATA);
Oscil <2048, AUDIO_RATE> squareOscil(SQUARE_NO_ALIAS_2048_DATA);
Oscil <8192, AUDIO_RATE> sawOscil(SAW8192_DATA);
Oscil <8192, AUDIO_RATE> triOscil(TRIANGLE_WARM8192_DATA);

Smooth <long> Lag1(0.9975f);

// for triggering the envelope
EventDelay noteDelay;

ADSR <AUDIO_RATE, AUDIO_RATE> envelope;

boolean note_is_on = true;
byte master_volume = 200;
byte gain;

void setup(){
  //Serial.begin(9600); // for Teensy 3.1, beware printout can cause glitches
  //Serial.begin(115200);
  
  randSeed(); // fresh random
  noteDelay.set(2000); // 2 second countdown
  startMozzi();
}


unsigned int duration, attack, decay, sustain, release_ms;

void updateControl()
{
  int tilt = mozziAnalogRead(0); 
  //Serial.print("tilt = "); Serial.println(tilt);
  
  if(noteDelay.ready())
  {
    // choose envelope levels
    byte attack_level = rand(128)+127;
    byte decay_level = rand(255);
    envelope.setADLevels(attack_level, decay_level);

    // generate a random new adsr time parameter value in milliseconds
    unsigned int new_value = rand(300) + 100;

    // randomly choose one of the adsr parameters and set the new value
    switch (rand(4)){
      case 0:
      attack = new_value;
      break;

      case 1:
      decay = new_value;
      break;

      case 2:
      sustain = new_value;
      break;

      case 3:
      release_ms = new_value;
      break;
    }
    
    envelope.setTimes(attack,decay,sustain,release_ms);
    envelope.noteOn();

    byte midi_note = 80;
    aOscil.setFreq((int)mtof(midi_note));
    triOscil.setFreq((int)mtof(midi_note));
    squareOscil.setFreq((int)mtof(midi_note));
    sawOscil.setFreq((int)mtof(midi_note));
     
    int thres = 512;
    if (tilt > thres)  
    {
      gain = master_volume;
    }
    else
    {
      gain = 0;
    }

    noteDelay.start(attack + decay + sustain + release_ms);
  }
}


int updateAudio(){
  envelope.update();
  return (int) (envelope.next() * squareOscil.next()) >> 8; // * (gain >> 8);
  
}


void loop(){
  audioHook(); // required here
}
