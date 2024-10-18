// Se pide crear un semáforo de coches con Arduino. 
// 1. Se enciende el led de color verde durante 5 segundos. 
// 2. Se parpadea el led de color verde 3 veces durante 2 segundos. 
// 3. Se enciende después el led de color amarillo durante 3 segundos. 
// 4. Se enciende al final el led de color rojo durante 5 segundos. 

void setup() {
  int verde = 2; // Código de "setup", para el LED verde.
  pinMode(verde,OUTPUT); // Establece "pin" como salida.
  int amarillo = 4; // Código de "setup", para el LED verde.
  pinMode(amarillo,OUTPUT); // Establece "pin" como salida.
  int rojo = 7; // Código de "setup", para el LED rojo.
  pinMode(rojo,OUTPUT); // Establece "pin" como salida

}

void loop() {

  int verde = 2; // Inicializamos nuestro pin asignado al LED verde.
  digitalWrite(verde,HIGH); // Activa el pin verde.
  delay(5000); // Pausa de 5 segundos.
  digitalWrite(verde,LOW); // Desactiva "pin".
  delay(1000); // Pausa  de 1 segundo
  digitalWrite(verde,HIGH); // Activa "pin".
  delay(2000); // Pausa de 2 segundos.
  digitalWrite(verde,LOW); // Desactiva "pin".
  delay(1000); // Pausa de 2 segundos.
  digitalWrite(verde,HIGH); // Activa "pin".
  delay(2000); // Pausa de 2 segundos.
  digitalWrite(verde,LOW); // Desactiva "pin".
  delay(1000); // Pausa un segundo.
  digitalWrite(verde,HIGH); // Activa "pin".
  delay(2000); // Pausa de 2 segundos.
  digitalWrite(verde,LOW); // Desactiva el LED verde.
  
  int amarillo = 4; // Inicializamos nuestro pin asignado al LED amarillo.
  digitalWrite(amarillo,HIGH); // Activa el pin amarillo.
  delay(3000); // Pausa de 3 segundos.
  digitalWrite(amarillo,LOW); // Desactiva el LED amarillo.

  int rojo = 7; // Inicializamos nuestro pin asignado al LED rojo.
  digitalWrite(rojo,HIGH); // Activa el LED rojo.
  delay(5000); // Pausa de 5 segundos.
  digitalWrite(rojo,LOW); // Desactiva el LED.

}
