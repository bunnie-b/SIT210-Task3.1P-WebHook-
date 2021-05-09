#include <DHT.h>; //download and include library

//Constants
#define DHTPIN 2     // [we're connected to pin 2
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor 


//Variables
float temp; //Stores temperature value

void setup()
{
    Serial.begin(9600);
    dht.begin();
}

void loop()
{
    //Read data and store it to variable temp
   
    temp= dht.readTemperature();
    
    //Print temp and humidity values to serial monitor
    Serial.print("Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(30000); //Delay 30 secs.
}
