#include <dht22.h>
#define DHT22PIN 4

dht22 DHT22;

void setup()
{
  Serial.begin(9600);
 
}

void loop()
{
  Serial.println();

  int chk = DHT11.read(DHT22PIN);

  Serial.print("Humidity (%): ");
  Serial.println((float)DHT22.humidity, 2);

  Serial.print("Temperature (C): ");
  Serial.println((float)DHT22.temperature, 2);

  delay(2000);
}

// This code is modified from https://create.arduino.cc/projecthub/arcaegecengiz/using-dht11-b0f365
// Im going to still reform it to be able to send data over http to rest API back-end
