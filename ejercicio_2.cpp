// Haz que el LED PIN 13 parpadee regularmente, PIN 12 dos veces mas lento, PIN 11 cuatro veces más lento.

void setup() {
  int pin = 2;
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT); // Establece "pin" como salida
  int nip = 4;
  // put your setup code here, to run once:
  pinMode(nip,OUTPUT); // Establece "pin" como salida
  int nep = 7;
  // put your setup code here, to run once:
  pinMode(nep,OUTPUT); // Establece "pin" como salida
  
}
void loop() {
  int pin = 2;
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH); // Activa "pin"
  delay(100); // Pausa un segundo
  digitalWrite(pin,LOW); // Desactiva "pin" delay(1000);
  delay(10); // Pausa un segundo
  int nip = 4;
  // put your main code here, to run repeatedly:
  digitalWrite(nip,HIGH); // Activa "pin"
  delay(100); // Pausa un segundo
  digitalWrite(nip,LOW); // Desactiva "pin" delay(1000);
  delay(20); // Pausa un segundo
  int nep = 7;
  // put your main code here, to run repeatedly:
  digitalWrite(nep,HIGH); // Activa "pin"
  delay(100); // Pausa un segundo
  digitalWrite(nep,LOW); // Desactiva "pin" delay(1000);
  delay(40); // Pausa un segundo
}
