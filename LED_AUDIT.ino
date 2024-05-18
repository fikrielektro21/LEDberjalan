const int pin = 13;
const int pon = 12;
const int pen = 11;
const int pan = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(pin, OUTPUT);
pinMode(pon, OUTPUT);
pinMode(pen, OUTPUT);
pinMode(pan, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(pin, LOW);
/*if (pin == HIGH {
  digitalWrite(pin, HIGH);
  delay(500);
}*/

//RELAY 1
digitalWrite(pin, LOW);
digitalWrite(pen, LOW);
digitalWrite(pon, LOW);
digitalWrite(pan, LOW);
/*
digitalWrite(pin, HIGH);
delay(500);
digitalWrite(pin, LOW);
delay(100);
// relay 2
digitalWrite(pon, HIGH);
delay(500);
digitalWrite(pon, LOW);
delay(100);
// relay 3
digitalWrite(pen, HIGH);
delay(500);
digitalWrite(pen, LOW);
delay(100);


// relay 1.
digitalWrite(pin, HIGH);
delay(400);
digitalWrite(pin, LOW);
delay(100);

// relay 2 .
digitalWrite(pon, HIGH);
delay(400);
digitalWrite(pon, LOW);
delay(100);

//relay 3
digitalWrite(pen, HIGH);
delay(400);
digitalWrite(pen, LOW);
delay(100);


// relay 1..
digitalWrite(pin, HIGH);
delay(300);
digitalWrite(pin, LOW);
delay(100);


// relay 2..
digitalWrite(pon, HIGH);
delay(300);
digitalWrite(pon, LOW);
delay(100);


// relay 3..
digitalWrite(pen, HIGH);
delay(300);
digitalWrite(pen, LOW);
delay(100);






// relay 1..
digitalWrite(pin, HIGH);
delay(200);
digitalWrite(pin, LOW);
delay(100);


// relay 2..
digitalWrite(pon, HIGH);
delay(200);
digitalWrite(pon, LOW);
delay(100);


// relay 3..
digitalWrite(pen, HIGH);
delay(200);
digitalWrite(pen, LOW);
delay(100);





// relay 1..
digitalWrite(pin, HIGH);
delay(150);
digitalWrite(pin, LOW);
delay(100);


// relay 2..
digitalWrite(pon, HIGH);
delay(100);
digitalWrite(pon, LOW);
delay(100);


// relay 3..
digitalWrite(pen, HIGH);
delay(100);
digitalWrite(pen, LOW);
delay(100);
*/



digitalWrite(pin, HIGH);
delay(500);
digitalWrite(pin, LOW);
delay(500);
digitalWrite(pin, HIGH);
delay(500);
digitalWrite(pin, LOW);
delay(500);




digitalWrite(pon, HIGH);
delay(500);
digitalWrite(pon, LOW);
delay(500);
digitalWrite(pon, HIGH);
delay(500);
digitalWrite(pon, LOW);
delay(500);


digitalWrite(pen, HIGH);
delay(500);
digitalWrite(pen, LOW);
delay(500);
digitalWrite(pen, HIGH);
delay(500);
digitalWrite(pen, LOW);
delay(500);


// relay 4
digitalWrite(pan, HIGH);
delay(1000);
digitalWrite(pan, LOW);
delay(1000);




digitalWrite(pin, HIGH);
digitalWrite(pen, HIGH);
digitalWrite(pon, HIGH);
digitalWrite(pan, HIGH);
delay(2000);


}
