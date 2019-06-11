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

  // set oscillator frequency in Hz
  SinOsc1.setFreq(347);

  // start serial communication (to print sensor values to serial monitor)
  Serial.begin(115200); 

  // start mozzi core (and set control update rate in Hz)
  startMozzi(128); 
}


void updateControl(){
  // put changing controls here (are updated in control update rate)

  // read sensor value from A0 (range: 0...1023)
  int tilt = mozziAnalogRead(0); 
  Serial.print("tilt = "); Serial.println(tilt);

  // map tilt to gain value and apply master volume
  //gain = map(tilt, 0, 1023, master_volume, 0); 

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
  
  // read sensor value from A1 (range: 0...1023)
  //int light = mozziAnalogRead(1);
  //Serial.print("light = "); Serial.println(light);

  // update frequency value
  //freq = map(light, 10, 500, 100, 1000);
  //SinOsc1.setFreq(freq);
}


int updateAudio(){
  // put audio processing here (updated in audio rate)
  // this is where sound synthesis takes place
  // return next audio sample
  return (Lag1.next(gain) * SinOsc1.next()) >> 8;
}


void loop() {
  // put your main code here, to run repeatedly:
  // don't put anything else here
  audioHook();
}
