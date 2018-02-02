// I SUGGEST YOU: Add the libraries Tone.h and rtttl.h, use fucking google for it!
#include <Tone.h>
#include <rtttl.h>
#include <LiquidCrystal.h>

// Speaker Port:

const int pinSpeaker = 3;
const int octave = 0; 

// LCD Ports (**If the screen doesn't work maybe you should check this part, check the wires.):

const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Initial animation:

int fps=4, s, backLight = 43;                

// Runing in the 90's RTTTL, please, DON'T TRY TO MODIFY THIS FUCKING SHIT!!! <3

const char introSong[] PROGMEM = "ElputoInitial-D:d=4,o=5,b=128:16a6,16g6,16a6,16e7,16d7,16c7,16a6,16p,16a6,16g6,16a6,16e7,16d7,16c7,16a6,16p,16c7,16b6,16g6,16c7,16p,16b6,16g6,16p,16c7,16b6,16g6,16d7,16p,16c7,16g6,16p,16a6,16g6,16a6,16e7,16d7,16c7,16a6,16p,16a6,16g6,16a6,16e7,16d7,16c7,16a6,16p,16c7,16p,16c7,16p,16d7,16p,16d7,16p,16e7,16p,16e7,16p,16d7,16p,16d7";
Rtttl player;

void setup(void)
{

        // Play Initial-D song
        player.begin(pinSpeaker);
        player.play_P(introSong, octave);

        // Define LCD 16x2, if you are using an a different display, you are fucked!
}

void loop(void)
{


  
}
