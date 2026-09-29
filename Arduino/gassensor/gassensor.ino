const int Sensor = A0;
int Sensorvalue = 0;
void setup()
{
  pinMode(Sensor,INPUT);
  Serial.begin(9600);
  Serial.println("Welcome");
}
void loop()
{
  Sensorvalue = analogRead(Sensor);
  Serial.println("gas value=");
  Serial.println(Sensorvalue);
  delay(500);
}
