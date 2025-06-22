#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "SparkFun_STTS22H.h"
#include "DFRobot_GNSS.h"
#include "DFRobot_GNSSAndRTC.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_ADDRESS 0x3D
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
const int scl = 2;
const int sda = 3;

const int upPin = 6;
const int downPin = 7;
const int leftPin = 8;
const int rightPin = 4;
const int selectPin = 10;
const int lboPin = 9;







#define GNSS_ADDR 0x10
#define STTS22H_ADDR 0x3F 


SparkFun_STTS22H tempSensor;
DFRobot_GNSS_I2C gnss(&Wire, GNSS_ADDR);


bool hasGNSS = false;
bool hasTemp = false;

float tempF = 0.0;
float temp; 

void setup() {
  pinMode(upPin, INPUT_PULLUP);
  pinMode(downPin, INPUT_PULLUP);
  pinMode(leftPin, INPUT_PULLUP);
  pinMode(rightPin, INPUT_PULLUP);
  pinMode(selectPin, INPUT_PULLUP);
  pinMode(lboPin, INPUT);
  Wire.begin();

  Serial.begin(115200);
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); 
  }
  if( !tempSensor.begin() )
	{
		Serial.println("Temperature Sensor Did not Begin.");
		while(1);
	}
  
  if (gnss.begin()) {
    hasGNSS = true;
    gnss.enablePower();
    gnss.setGnss(gnss.eGPS_BeiDou_GLONASS);
  } else {
    Serial.println("GNSS not detected.");
  }

  
  tempSensor.setDataRate(STTS22H_POWER_DOWN);
	delay(10);
	tempSensor.setDataRate(STTS22H_1Hz);
  tempSensor.enableAutoIncrement();
  display.display();
  delay(2000);
  display.clearDisplay();
  

  

}

void loop() {
  
  if (hasGNSS) {
    DFRobot_GNSSAndRTC::sTim_t utc = gnss.getUTC();
	  DFRobot_GNSSAndRTC::sTim_t date = gnss.getDate();
	  DFRobot_GNSSAndRTC::sLonLat_t lat = gnss.getLat();
	  DFRobot_GNSSAndRTC::sLonLat_t lon = gnss.getLon();
	  double high = gnss.getAlt();
	  uint8_t starUserd = gnss.getNumSatUsed();
	  double sog = gnss.getSog();
	  double cog = gnss.getCog();
    display.println((char)lat.latDirection);
	  display.println((char)lon.lonDirection);
    display.print("alt high = ");
	  display.println(high);
    display.print("lat degree = ");
	  display.println(lat.latitudeDegree, 6);
	  display.print("lon degree = ");
	  display.println(lon.lonitudeDegree, 6);
  }
  if( tempSensor.dataReady() ) 
	{
    display.clearDisplay();
		tempSensor.getTemperatureF(&temp);

		display.print("Temp: "); 
		Serial.print(temp);
		display.println("F"); 
    display.display();

	} 
  if (analogRead(lboPin)) < 200 {
    display.clearDisplay();
    display.print("Battery Low!");
    display.display();
    delay(2);
  if (digitalRead(selectPin) == LOW) {
    display.clearDisplay();
    
    float batt = analogRead(lboPin) * (3.3 / 1023.0);
    Serial.print("Battery V: "); Serial.println(batt);
    
    display.println(analogRead(lboPin));
    display.display();
    delay(3000);
  }
  }
}
