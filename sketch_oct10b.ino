int BUTTON1 = 9;
int BUTTON2 = 10;
int BUTTON3=11;
int BLUE=3;
int GREEN=6;
int RED=5;
//this project didn't turn out exactly how I wanted it to, but it turned out pretty neat nonetheless!
void setup(){
pinMode(BUTTON1,INPUT);
pinMode(BUTTON2,INPUT);
pinMode(BUTTON3,INPUT);
pinMode(BLUE,OUTPUT);
pinMode(RED,OUTPUT);
pinMode(GREEN,OUTPUT);
}
void loop(){
{if(digitalRead(BUTTON1) == HIGH){
digitalWrite(RED, 1);
}else{
digitalWrite(RED, 0);
}}
//somehow the red function ended up turning on the whitish light, and the other lights would only turn on when the "red" button was on.
{if(digitalRead(BUTTON2) == HIGH)
{
digitalWrite(GREEN, 1);
}else{
digitalWrite(GREEN, 0);
}}
//the mix of the buttons for red and "green" made blue, somehow
{if(digitalRead(BUTTON3) == HIGH){
digitalWrite(BLUE, 1);
}else{
digitalWrite(BLUE, 0);
//the red and "blue" buttons together made yellow. When all three buttons were pressed, they made green. I could never figure out how to wire it so I could get red. 
}}}
