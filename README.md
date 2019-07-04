# kubb_sound
kubb_sound was a university project of the game Kubb played with sounds to locate the towers. The game had been designed and developed during the Seminar "Sonic Interaction Design" at TU / KUG Graz.

![alt text](https://raw.githubusercontent.com/chrisworld/kubb_sound/master/images/kubb1.jpg)

## Motivation
Our motivation was to create an audible game, that can be played blind only relying on audio cues. We therefore went over many different existing game ideas and came upon Kubb, a fun game that can be played outside with at least two players challenging each other throwing wooden rods at towers. We were the opinion that it is possible to play this game merely with audio sources to locate the towers. Therefore this game should be accessed to blind people and to everyone who enjoy the challenge playing Kubb without vision. 

## Development process
### Game Design
We first laid out the detailed game design with regard to the original game, so that it was playable only with audio sources. At each situation and game state the players need to know where the towers are placed and if they are standing or lying, in case one of the towers was hit by the throw of the rod. At this point we decided to implement following Audio cues:
- Each tower should get its own distinctive sound characteristic
- When a tower is hit a audio cue should be played
- Towers that are lying flat on the ground need to be distinguished by towers that are standing upright

### Sound Design
The distinctive sound characteristics are composed of:
- Each player side towers and the king tower have a different Waveforms for the ADSR
- Each Tower on each side has an own pitch
- Each Tower has a distinctive rhythm pattern

We decided that the player 1 side towers have a saw waveform and the player 2 a square. This two waveforms acoustic color, makes it easy to locate them. The King tower however receives a triangle waveform, which is a bit more difficult to locate, since there are less harmonics.
The different tower tone pitches should raise a triad accord, so that the sounds are not too annoying for the players.
Also the different rhythm patterns are great means to locate different sound sources. With the distinctive pitch and rhythm patterns the sound sources can be detected by their location, this is similar to the cocktail party effect. For the ADSR we used for each tower the same setting:
- attack = 50ms
- decay = 50ms
- sustain = 100ms
- release = 50ms

For the hit sound we made a voice recording of "Volltreffer" and pitched it to a funny high frequency.
When one player hits one of the towers with the rod and the tower is then lying flat on the ground, the rhythm should slow down by half, the frequency shifts an octave lower and the volume is turned down more than the half. This makes the fallen tower less present in the game, but still enough to find and pick it up again.

### Technical Design
Each Tower needed to be equipped with a audio source, therefore we used following components for each tower:
- Arduino SparkFun Board integrating with a lightweight microprocessor 
- Power supply with 9V Batteries
- Tilt Sensor to indicate if the tower is lying flat on the ground
- Sound Speakers
- Mechanical Protection against the wooden rod

The mechanical protection was merely made by metal cans, where everything was placed in safely. For the first prototype we used only three towers, a player 1 tower, a player 2 tower and a king tower.

## Discussion
The result of the prototype setup, consisting of four towers and one king, is very encouraging. The basic construction with the metal cans, including the mozzi, the speaker and the batteries was solid enough to survive all of the test runs (even get thrown through the air). The positions of the single components of the audio device were well placed, so the tilt sensor, the sample and the different sounds are working fine. Just now the physical appearance is more functionally than a treat for the eyes. This would be the next step in the optimization process.

According to the Auditory Scene Analysis by Bregman and the paper about psychoacoustic auditory displays for navigation [1], we used separate auditory streams for each team and the king. As mentioned above we implemented different waveforms. By focusing on the things heard, it is possible to group the steady sound pattern and distinguish the rhythmic pattern.  

The intended use of the game is over a longer period of time, so it is important to avoid a wipe out effect. As single event each figure produces a quite annoying sound, so we used a D-Major chord as holistic musical structure. This simple trick transformed a possible auditive fatigue to a positive and harmonic feeling. The low-pitched fallen tower is perfectly integrated in this sound atmosphere without disrupting the concentration of the player.

## Conclusion
The test runs were made by people with the ability to picture the surrounding before their turn. The test run with blind people, without a glimpse at the game setup is still missing. 
At this stage of development, the auditive version of Kubb works and the localization of the figure is possible very precisely, but the struggle with the accuracy of firing still remains. 


## Literature

Kubb. (2019, 04.Juli). Abgerufen von https://de.wikipedia.org/wiki/Kubb

Stockman,T., & Rajgor, N., & Metatla, O., & Harrar, L.,(2007). The Design of Interactive audio soccer. In, Proceedings of the 13th International Conference on Auditory Display. Montréal, Canada 

Ziemer, T., & Schulties, H.(2018). Psychoacoustics auditory display for navigation: an auditory assistance system for spatial orientation tasks. Journal of Multimodal User Interfaces, https://doi.org/10.1007/s12193-018-0282-2


## Video

https://www.dropbox.com/s/v0zfiwhrwmdabd8/Kubb_Sound_Video.mp4?dl=0

## Collaboration Protocol and Credits

### Developers:

Christian Walter
- Concept
- Programming of the ADSR Synthesizer
- Implementing of the sampled audio source into the project
- Design of Sounds
- Documentation

Markus Sternbauer
- Concept
- Programming of tilt sensor 
- Mechanical Construction
- Design of Sounds
- Video cut
- Sample recording

### Used Software:
We used the Mozzi library from https://github.com/sensorium/Mozzi/
and implemented the ADSR from the examples.

## Acknowledgment
Special thanks to Marian Weger and Katharina Groß-Vogt for their technical and financial support to create this project. And special thanks to our unknown young friend for play testing, as well as our dear colleagues.

