#include<SoftwareSerial.h>
SoftwareSerial gsm(2,3);
void setup() {
  // put your setup code here, to run once:
  gsm.begin(9600);
Serial.begin(9600);
delay(10000);
gsm.println("AT+CMGF=1");
  delay(1000);
  gsm.println("ATD7488248448;");
  delay(100);
  gsm.println("ATH");
}

void loop() {
  // put your main code here, to run repeatedly:

}
