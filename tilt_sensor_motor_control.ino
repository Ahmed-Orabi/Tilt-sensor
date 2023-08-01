int sensor = A0;
int Reading;
int enb = 3;
int in3 = 8;
int in4 = 9;
void setup()
{
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop()
{
  Reading = analogRead(sensor) * 0.25;
  analogWrite(enb,Reading);
  digitalWrite(in3 ,HIGH);
  digitalWrite(in4 ,LOW);
}