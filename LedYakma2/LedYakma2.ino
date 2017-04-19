#define ledPin 13
#define ledPin2 5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(ledPin2,OUTPUT);

}

void loop() {
  digitalWrite(ledPin,HIGH);  
  digitalWrite(ledPin2,HIGH);
  delay(2000);
  digitalWrite(ledPin,LOW);
  digitalWrite(ledPin2,LOW);
  delay(2000);
  
  // put your main code here, to run repeatedly:

}
