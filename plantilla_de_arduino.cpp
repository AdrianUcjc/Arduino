void setup() {
  int pin = 4;
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT); // Establece "pin" como salida

}

void loop() {
  int pin = 4;
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH); // Activa "pin"
  delay(1000); // Pausa un segundo
  digitalWrite(pin,LOW); // Desactiva "pin" delay(1000);
  delay(1000); // Pausa un segundo

}
