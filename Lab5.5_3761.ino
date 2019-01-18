int led1=8;
int led2=9;
int led3=10;
int sw=7;
int c=0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(sw, INPUT);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}

void loop()
{
  if(digitalRead(sw)==0){
    while(digitalRead(sw)==0){
      delay(100);
    }
    ++c;
  }
  if(c==1){
    digitalWrite(led1,HIGH);
  }else if(c==2){
    digitalWrite(led2,HIGH);
  }else if(c==3){
    digitalWrite(led3,HIGH);
  }else if(c==4){
    c=0;
    for(inti=0;i<10;i++){
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      delay(500);
      
    }
  }
  
}