# define n1 4
# define n2 5
# define n3 6
# define n4 7
# define e1 9
# define e2 10
char read;
void setup()
{
  for(int i=4 ; i<=7 ; i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
   pinMode(e1,OUTPUT);
   pinMode(e2,OUTPUT);
}

void loop()
{
  if(Serial.available()>0){
    read=Serial.read();
    switch(read){
      // Forword
      case'f':
      digitalWrite(n1,HIGH);
      digitalWrite(n2,LOW);
      digitalWrite(n3,HIGH);
      digitalWrite(n4,LOW);
      analogWrite(e1,150);
      analogWrite(e2,150);
      break;
      // 
      case'b':
      digitalWrite(n1,LOW);
      digitalWrite(n2,HIGH);
      digitalWrite(n3,LOW);
      digitalWrite(n4,HIGH);
      analogWrite(e1,150);
      analogWrite(e2,150);
      break;
      // 
     case'r':
      digitalWrite(n1,HIGH);
      digitalWrite(n2,LOW);
      digitalWrite(n3,LOW);
      digitalWrite(n4,LOW);
      analogWrite(e1,150);
      analogWrite(e2,0);
      break;
      // 
      case'l':
      digitalWrite(n1,LOW);
      digitalWrite(n2,LOW);
      digitalWrite(n3,HIGH);
      digitalWrite(n4,LOW);
      analogWrite(e1,0);
      analogWrite(e2,150);
      break;
     
      case's':
      digitalWrite(n1,LOW);
      digitalWrite(n2,LOW);
      digitalWrite(n3,LOW);
      digitalWrite(n4,LOW);
      analogWrite(e1,0);
      analogWrite(e2,0);
      break;
    }
  }
}