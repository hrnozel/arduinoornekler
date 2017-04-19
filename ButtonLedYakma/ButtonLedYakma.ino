#define kirmiziLed 10 //ledin bağlanacağı bacak
#define buttonPin 3   //butonun bağlanacağı pin
int *buttonDeger; 
void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
  pinMode(kirmiziLed,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {

  *buttonDeger=digitalRead(buttonPin);
  if(buttonDeger==true){
    digitalWrite(kirmiziLed,HIGH);
    delay(2000);
  }
  else{
    digitalWrite(10,LOW);
  }
  
  // put your main code here, to run repeatedly:

}
