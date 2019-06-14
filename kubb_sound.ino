#include <MozziGuts.h>
#include <Oscil.h>
#include <Smooth.h>
#include <tables/sin2048_int8.h>

// Define oscillators, filters, etc.:
// usage: Oscil <table_size, update_rate> name(wavetable)
Smooth <long> Lag1(0.9975f);

// define volume settings
byte master_volume = 200;
byte volume_tower = 100;
byte volume_hit = 200;

// tilt shift
boolean tilt_shift = false;

int freq;


void setup() 
{
  // setup
  setupP1();
  setupVolltreffer();

  // start mozzi core (and set control update rate in Hz)
  startMozzi(128); 
}


void updateControl(){
  // put changing controls here (are updated in control update rate)

  // read sensor value from A0 (range: 0...1023)
  int tilt = mozziAnalogRead(0); 
  
  // debug
  //Serial.print("tilt = "); Serial.println(tilt);

  // threshold
  int thres = 512;
  if (tilt > thres)
  {
    if (!tilt_shift)
    {
      tilt_shift = true;
    }
    //gain = master_volume;
  }
  else
  {
    if (tilt_shift)
    {
      // volltreffer sample
      updateControlVolltreffer(tilt_shift);
      tilt_shift = false;
    }
  }

  // Tower samples
  updateControlP1(tilt);
  //updateControlP2(tilt);
  //updateControlKing(tilt);
}


int updateAudio(){
  // put audio processing here (updated in audio rate)
  // this is where sound synthesis takes place

  // call audio snyths
  int hit = updateAudioVolltreffer();
  int p1_tower = updateAudioP1() * volume_tower;

  // additive synthesis
  int sound_synth = (p1_tower + hit);
  //sound_synth = hit;

  // return next audio sample
  return (Lag1.next(master_volume) * sound_synth) >> 8;
}


void loop() {
  // put your main code here, to run repeatedly:
  // don't put anything else here
  audioHook();
}
