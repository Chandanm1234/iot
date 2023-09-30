//option 1 
/*
int led = 4;
int switchh = 2;

void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(switchh,INPUT);
}

void loop() 
{
  if (digitalRead(switchh) == 0)
    digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);
}*/
//option 2
int ldr=13;
int buzzer=3;
void setup{
  pinMode(lrd,INPUT);
  pinMode(buzer,output);
  Serial.begin(9600);
}
void loop{
 int a = digitalRead(ldr);
 if (ldr>1000){
  Serial.print("out");
  digitalWrite(buzzer,HIGH)
 }
}