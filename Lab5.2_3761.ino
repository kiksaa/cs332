int pin;
void setup()
{
  Serial.begin(9600);
  for(pin=2;pin<=11;pin++){
  pinMode(pin, OUTPUT);
 }
}
void loop()
{
  int aval = analogRead(A0);
  Serial.println(aval,DEC);
  Serial.println(aval/102,DEC);
  delay(100);
  aval = aval/102;
  switch(aval){
    case 1: aval=2;
    break;
    case 2: aval=3;
    break;
    case 3: aval=4;
    break;
    case 4: aval=5;
    break;
    case 5: aval=6;
    break;
    case 6: aval=7;
    break;
    case 7: aval=8;
    break;
    case 8: aval=9;
    break;
    case 9: aval=10;
    break;
    case 10: aval=11;
    break;
    defaul: aval = 0;
  }
  for(pin=2;pin<=11;pin++){
    if(pin==aval){
      digitalWrite(pin, HIGH);
    }else{
      digitalWrite(pin, LOW);
    }
 }
}