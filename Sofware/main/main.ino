#include <Wire.h>
#include <INA226.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// OLED display configuration
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

INA226 ina;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  // initialize the OLED screen
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found!");
    while (1);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  // initialize the INA226
  if (ina.begin() != 0) {
    Serial.println("INA226 not found! Go fix it!!");
    display.setCursor(0, 0);
    display.println("INA226 not working :(");
    display.display();
    while (1);
  }

  // here we are configuring conversion times and averaging ( to improve accuracy (hopefully))
  ina.setAverage(INA226_AVERAGES_16); // smooth out readings
  ina.setBusConversionTime(INA226_CONV_TIME_1100US);
  ina.setShuntConversionTime(INA226_CONV_TIME_1100US);
  ina.setMode(INA226_MODE_CONTINUOUS);

  display.setCursor(0, 0);
  display.println("INA226 is working! Yay!");
  display.display();
  delay(1000);
}

void loop() {
  float voltage = ina.readBusVoltage();  // in V
  float current = ina.readCurrent();     // in mA
  float power   = ina.readPower();       // in mW

  // print the details to serial
  Serial.print("Voltage: "); Serial.print(voltage, 2); Serial.println(" V");
  Serial.print("Current: "); Serial.print(current, 1); Serial.println(" mA");
  Serial.print("Power:   "); Serial.print(power, 1); Serial.println(" mW");
  Serial.println();

  // display the details on the OLED
  display.clearDisplay();
  display.setCursor(0, 0);
  display.print("Voltage: "); display.print(voltage, 2); display.println(" V");
  display.print("Current: "); display.print(current, 1); display.println(" mA");
  display.print("Power:   "); display.print(power, 1); display.println(" mW");
  display.display();

  delay(1000);
}