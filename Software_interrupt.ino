#include <TimerOne.h>
String LEDStatus = "OFF";

int YellowLED = 10;
int RedLED = 9;

void setup()
{
   pinMode(YellowLED, OUTPUT);
   pinMode(RedLED, OUTPUT); 
   Timer1.initialize(5000000); //starting an interrupt (in micro seconds)
   Timer1.attachInterrupt(BlinkYellow);
}
void loop()
{
    digitalWrite(RedLED, HIGH);
    delay(1000);
    digitalWrite(RedLED, LOW);
   delay(1000);
}

void BlinkYellow(){
if (LEDStatus == "ON"){
    digitalWrite(YellowLED,LOW);
    LEDStatus="OFF";
    return;

}
if (LEDStatus=="OFF"){
    digitalWrite(YellowLED, HIGH);
    LEDStatus="ON";
}
}