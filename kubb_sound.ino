#include <MozziGuts.h>
#include <Oscil.h>
#include <Smooth.h>

// smoothing for safety
Smooth <long> Lag1(0.9975f);

// define volume settings
byte master_volume = 255;
byte volume_tower = 255;
byte volume_hit = 255;

byte volume_tower_down = 100;

// tilt shift
boolean tilt_shift = false;

// tower_standing
boolean tower_standing = true;


// Setup Synths
void setup() 
{
  // setup
  //setupP1();
  //setupP2();
  setupKing();
  setupVolltreffer();

  // start mozzi core (and set control update rate in Hz)
  startMozzi(128); 
}


// update Controls
void updateControl()
{
  // read tilt sensor
  int tilt = mozziAnalogRead(0); 
  
  // threshold
  int thres = 512;

  // tower stands
  if (tilt > thres)
  {
    // Tower is standing
    tower_standing = true;

    // Tower falls
    tilt_shift = false;
  }

  // tower is down
  else
  {
    // tower is lying
    tower_standing = false;

    // hit sound
    if (!tilt_shift)
    {
      // play hit sound once
      tilt_shift = true;
      updateControlVolltreffer(tilt_shift);
    }
  }

  
  // update tower sounds
  //updateControlP1();
  //updateControlP2();
  updateControlKing();
}


// update Audio
int updateAudio()
{
  // call audio snyths and mix them
  // hit sound
  int hit = (updateAudioVolltreffer() * volume_hit) >> 8;

  int tower;
  if (tower_standing)
  {
    //tower = (updateAudioP1() * volume_tower) >> 8;
    //tower = (updateAudioP2() * volume_tower) >> 8;
    tower = (updateAudioKing() * volume_tower) >> 8;
  }
  else
  {
    //tower = (updateAudioP1() * volume_tower_down) >> 8;
    //tower = (updateAudioP2() * volume_tower_down) >> 8;
    tower = (updateAudioKing() * volume_tower_down) >> 8;
  }
  
  // additive synthesis
  int sound_synth = (tower + hit);

  // return next audio sample
  return (Lag1.next(master_volume) * sound_synth) >> 8;
}


void loop() 
{
  audioHook();
}
