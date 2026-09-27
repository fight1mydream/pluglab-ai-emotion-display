#include <LedControl.h>
LedControl matrix = LedControl(7,5,6,1);
String command="";
const byte SMILE[8]={B00111100,B01000010,B10100101,B10000001,B10100101,B10011001,B01000010,B00111100};
const byte SLEEPY[8]={B00111100,B01000010,B10000001,B10011001,B10000001,B10111101,B01000010,B00111100};
const byte SURPRISE[8]={B00111100,B01000010,B10100101,B10000001,B10011001,B10100101,B01000010,B00111100};
const byte NEUTRAL[8]={B00111100,B01000010,B10100101,B10000001,B10000001,B10111101,B01000010,B00111100};
void showFace(const byte image[8]){for(int row=0;row<8;row++)matrix.setRow(0,row,image[row]);}
void setup(){Serial.begin(9600);matrix.shutdown(0,false);matrix.setIntensity(0,5);matrix.clearDisplay(0);showFace(NEUTRAL);}
void loop(){while(Serial.available()){char c=Serial.read();if(c=='\n'){command.trim();if(command=="SMILE")showFace(SMILE);else if(command=="SLEEPY")showFace(SLEEPY);else if(command=="SURPRISE")showFace(SURPRISE);else showFace(NEUTRAL);command="";}else if(c!='\r'){command+=c;}}}
