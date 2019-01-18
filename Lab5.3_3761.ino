int pin=11;
void setup()
{
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop()
{
  int val = analogRead(A0);
  Serial.println(val,DEC);
  Serial.println(val/4,DEC);
  analogWrite(pin,val/4);
 
}