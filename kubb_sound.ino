#include <MozziGuts.h>
#include <Oscil.h>
#include <Smooth.h>
#include <tables/sin2048_int8.h>

// Define oscillators, filters, etc.:
// usage: Oscil <table_size, update_rate> name(wavetable)
Oscil <SIN2048_NUM_CELLS, AUDIO_RATE> SinOsc1(SIN2048_DATA);
Smooth <long> Lag1(0.9975f);

// Define global variables
byte master_volume = 200;
byte gain;
int freq;


void setup() {
  // put your setup code here, to run once:

  // start serial communication for debugging
  //Serial.begin(115200); 

  // set oscillator frequency in Hz
  SinOsc1.setFreq(347);

  // start mozzi core (and set control update rate in Hz)
  startMozzi(128); 

  setupVolltreffer();
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
    gain = master_volume;
  }
  else
  {
    gain = 0;
  }

  updateControlVolltreffer();
}


int updateAudio(){
  // put audio processing here (updated in audio rate)
  // this is where sound synthesis takes place

  // call audio snyths
  int hit = updateAudioVolltreffer();

  // additive synthesis
  int sound_synth = (SinOsc1.next() + hit);
  //sound_synth = hit;

  // return next audio sample
  return (Lag1.next(gain) * sound_synth) >> 8;
}


void loop() {
  // put your main code here, to run repeatedly:
  // don't put anything else here
  audioHook();
}
