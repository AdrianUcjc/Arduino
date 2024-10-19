# Excercise 2:

## Create a traffic light with an Arduino:
The sequence goes:
> 1. Turn on for 5 seconds the green LED.
> 2. Flash the green LED 3 times, each flash being 2 seconds long.
> 3. Turn on the yellow LED for 3 seconds.
> 4. Turn on the red LED for 5 seconds.

```

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

```
We can reuse the circuit built for excecise 1:

![Screenshot 2024-10-17 140745](https://github.com/user-attachments/assets/c1956dc1-9c8a-4b7f-94f0-cad022a2362f)
