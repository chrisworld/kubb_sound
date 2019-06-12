/*  Example of playing a sampled sound,
    using Mozzi sonification library.

    Demonstrates one-shot samples scheduled
    with EventDelay.

    Circuit: Audio output on digital pin 9 on a Uno or similar, or
    DAC/A14 on Teensy 3.1, or
    check the README or http://sensorium.github.com/Mozzi/

    Mozzi documentation/API
    https://sensorium.github.io/Mozzi/doc/html/index.html

    Mozzi help/discussion/announcements:
    https://groups.google.com/forum/#!forum/mozzi-users

    Tim Barrass 2012, CC by-nc-sa.
*/

#include <MozziGuts.h>
#include <Sample.h> // Sample template
#include "./samples/voll_int8.h"
#include <EventDelay.h>

// use: Sample <table_size, update_rate> SampleName (wavetable)
Sample <voll_table_NUM_CELLS, AUDIO_RATE> aSample(voll_table_DATA);

// for scheduling sample start
EventDelay kTriggerDelay;

void setupVolltreffer()
{
  // play at the speed it was recorded
  aSample.setFreq((float) voll_table_SAMPLERATE / (float) voll_table_NUM_CELLS); 

  // 1500 msec countdown, within resolution of CONTROL_RATE
  kTriggerDelay.set(1500); 
}


void updateControlVolltreffer(){
  if(kTriggerDelay.ready()){
    aSample.start();
    kTriggerDelay.start();
  }
}


int updateAudioVolltreffer(){
  return (int) aSample.next();
}
