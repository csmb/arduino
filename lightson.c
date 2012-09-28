int ledPin = 11;
int analogPin = 3;
int val = 0;
int up = 1;
int i = 0;

void setup ()
{
  pinMode(ledPin, OUTPUT);
}

void loop(){
  while(up){
    if(i==254){
      up=0;
    }
    analogWrite(ledPin, i);
    delay(10);
    i++;
  }
  while(!up){
    if(i==1){
      up=1;
    }
    analogWrite(ledPin, i);
    delay(10);
    i--;
  }
}