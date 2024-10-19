# A Basic Arduino Structure Programm:

> The basic structure of an Arduino programm consists of two parts:
> 1: Setup Part: In this part, we'll define all modules to be used in our programm.
> 2: Loop: In this part, we'll be putting in the code that makes the whole thing work. 

## Create a basic programm which implements an LED wich alternates between On and Off every second:
```
void setup() { // put your setup code here, to run once:
  int pin = 4;
  pinMode(pin,OUTPUT); // We'll be defining "pin" as an output.

}

void loop() {  // put your main code here, to run repeatedly:
  int pin = 4;
  digitalWrite(pin,HIGH); // Activete "pin".
  delay(1000); // Pause for 1 sec.
  digitalWrite(pin,LOW); // Deactivate "pin" delay(1000);
  delay(1000); // Pause for 1 sec.

}
```
![Screenshot 2024-10-18 144932](https://github.com/user-attachments/assets/a005a22a-1c84-465a-8a8f-71a40cfc214b)
