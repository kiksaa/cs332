const byte led=8;
const byte s1=4;
const syte s2=5;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
}

void loop()
{
  if(digitalRead(s1)==LOW&&digitalRead(s2)==LOW){
    digitalWrite(led,HIGH)
  }else{
    digitalWrite(led,LOW)   
  }
}