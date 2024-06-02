Materials needed:

* Arduino board (e.g. Arduino Uno)
* LED
* 220 ohm resistor
* Temperature sensor (e.g. thermistor)
* Breadboard and jumper wires

Overview:
The idea is to create a circuit that turns on an LED in response to a certain temperature threshold. This could be used as a temperature monitoring system for things like alerting when a room gets too hot or too cold.

Code:
```cpp
const int LED_PIN = 13; // LED pin variable and port
const int TEMP_PIN = A0; // temp sensor analog in port
const int TEMP_THRESHOLD = 25; // adjust this value to set the temperature threshold (in Celsius)

void setup() {
pinMode(LED_PIN, OUTPUT);
Serial.begin(9600); // initialize Serial
}

void loop() {
int tempReading = analogRead(TEMP_PIN); // temperature reading
float temperature = (tempReading * 5.0 / 1024.0 - 0.5) * 100.0; // convert analog reading to temperature (Celsius)
Serial.print("Temperature: "); // print Serial 
Serial.print(temperature); // print Serial 
Serial.println(" C"); // print Serial

if (temperature > TEMP_THRESHOLD) { // compare actual temperature with the temperature threshold
digitalWrite(LED_PIN, HIGH); // LED light active
} else {
digitalWrite(LED_PIN, LOW); // LED light off
}

delay(10); // time that light is on
}
```

In this project, we read the value from the temperature sensor using the `analogRead` function and convert it to a temperature value in Celsius. We compare this temperature value to a `TEMP_THRESHOLD` value that you can adjust based on your specific circuit and temperature requirements. If the temperature exceeds the threshold, we turn on the LED by setting the `LED_PIN` to `HIGH`.