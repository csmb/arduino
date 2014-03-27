int pin;

void setup()
{  
  Serial.begin(9600);
}

void loop()
{
  float degreesF;

  // Pin conversion to fahrenheit
  degreesF = ((analogRead(pin) * 0.878907) - 58);
  
  Serial.print("Degrees F: ");
  Serial.println(degreesF);
  Serial.println("****************");
  delay(2000);
}
