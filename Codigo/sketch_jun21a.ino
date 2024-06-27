#define motorA1 12
#define motorA2 14
#define motorB1 27
#define motorB2 26
#define velocidade 170
#define EnA 13
#define EnB 25


#define SensorD 32
#define SensorE 33

void setup()
{
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  
  
  
  pinMode(SensorD, INPUT);
  pinMode(SensorE, INPUT);
  
}

/*void loop(){
  analogWrite(EnA, velocidade);
  analogWrite(EnB, velocidade);
  digitalWrite(motorA1,HIGH);
  digitalWrite(motorA2,LOW);
  digitalWrite(motorB1,HIGH);
  digitalWrite(motorB2,LOW);

}*/
void loop(){
  
  bool statusD = !digitalRead(SensorD);
  bool statusE = !digitalRead(SensorE);
  analogWrite(EnA,velocidade);
  analogWrite(EnB,velocidade);
    

  if(statusD && statusE){
    digitalWrite(motorA1, LOW);
    digitalWrite(motorA2, HIGH);
    digitalWrite(motorB1, LOW);
    digitalWrite(motorB2, HIGH);
  }
  if(!statusD && !statusE){
    digitalWrite(motorA1, LOW);
    digitalWrite(motorB1, LOW);
    digitalWrite(motorA2, LOW);
    digitalWrite(motorB2, LOW);
  }
  if(!statusD && statusE){
    digitalWrite(motorA1, LOW);
    digitalWrite(motorB1, LOW);
    digitalWrite(motorA2, LOW);
    digitalWrite(motorB2, HIGH);
  }
  if(statusD && !statusE){
    digitalWrite(motorA1, LOW);
    digitalWrite(motorB1, LOW);
    digitalWrite(motorA2, HIGH);
    digitalWrite(motorB2, LOW);
  }
}