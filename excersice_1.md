# 🤖Excercise 1:🤖

## Create a circuit with 3 LED's; the LED PIN 13 should blink regurlarly, the LED PIN 12 two times slower and LED PIN 11 four times slower.

```
void setup() {
  int pin = 2; // pin will be using the female port 2.
  pinMode(pin,OUTPUT); // Define pin as output.
  int nip = 4; // nip will be using the female port 4.
  pinMode(nip,OUTPUT); // Define nip as output.
  int nep = 7; // nep will be using the female port 7.
  pinMode(nep,OUTPUT); // Define nep as output.

}

void loop() {

  int pin = 2;
  digitalWrite(pin,HIGH); // Activete "pin".
  delay(100); //Pause for 1 sec.
  digitalWrite(pin,LOW); // Deactivate "pin" delay(1000);
  delay(10); // PAuse for 1 sec.

  int nip = 4;
  digitalWrite(nip,HIGH); // Activate "nip".
  delay(100); // PAuse for 1 sec.
  digitalWrite(nip,LOW); // Deativate "pin" delay(1000);
  delay(20); // Pause for 1 sec.

  int nep = 7;
  digitalWrite(nep,HIGH); // Activate "pin".
  delay(100); // PAuse for 1 sec.
  digitalWrite(nep,LOW); // DEactivate "pin" delay(1000);
  delay(40); // PAuse for 1 sec.

}
```

![Screenshot 2024-10-18 144932](https://github.com/user-attachments/assets/e83b6ad3-47cb-459e-a6df-1e890956e603)
