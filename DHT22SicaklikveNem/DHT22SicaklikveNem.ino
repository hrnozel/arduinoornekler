//Kütüphaneler
#include <DHT.h>;

//Sabitler
#define DHTPIN 7     // Data Pini
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// DHT sensörünün ayarları başlatılıyor.


//Variables
int chk;
float hum;  //Nem değerini tutacak
float temp; //Sicaklik değerini tutacak

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
    delay(2000);
    //Datayı okuyup nem ve sicaklik degelerini degiskenlerde sakliyoruz.
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //Elde ettigimiz degerleri seri port monitorune aktarıyoruz.
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(10000); //Delay 2 sec.
}

   
