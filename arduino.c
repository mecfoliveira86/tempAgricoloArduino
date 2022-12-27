// C++ code
//
int buzzer = 4;
int ledEmergency = 6;
int motorFan = 11;
int tmpSensor = 0;

int valorTMP = 0;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
  
  Serial.begin(9600);
  
  int tmpSensorValue = 0;
  
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(11, LOW);
  
}

void loop()
{
  valorTMP = analogRead(tmpSensor);
  Serial.print("Valor TMP = :");
  Serial.print(valorTMP);
  
  if(valorTMP <= 163) {
  	digitalWrite(11, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
  } else if(valorTMP > 164 and valorTMP < 207){
  	digitalWrite(11, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
  } else if (valorTMP >= 207){
  	digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(11, HIGH);
  }
}
