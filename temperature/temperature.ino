int pin;

void setup()
{  
  Serial.begin(9600);
}

void loop()
{
  float degreesF;

  // Read the pin output, convert to volts, then to C, then to F
  degreesF = (((analogRead(pin) * 0.004882814) - 0.5) * 100) * (9.0/5.0) + 32.0;
  
  Serial.print("Degrees F: ");
  Serial.println(degreesF);
  Serial.println("****************");
  delay(2000);
}
