Materials needed:

* Arduino board (e.g. Arduino Uno)
* LED
* 220 ohm resistor
* 1K ohm resistor
* Photo transistor 
* Breadboard and jumper wires

Overview:
The idea is to create a circuit that turns on an LED in response to light is in some level. This could be used as a notification system for things like when someone is turning on the light in a room or when a light is on.

Code:
```C++
const int LED_PIN = 13; // LED pin variable and port
const int PHOTORESISTOR_PIN = A0; // temp sensor analog in port
const int LIGHT_THRESHOLD = 1020; // adjust this value to set the light threshold 

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600); // initialize Serial
}

void loop() {
  int lightLevel = analogRead(PHOTORESISTOR_PIN); // light reading
  Serial.print("Light level: "); // print Serial
  Serial.println(lightLevel); // print Serial
  
  if (lightLevel > LIGHT_THRESHOLD) { // compare actual light with the temperature threshold
    digitalWrite(LED_PIN, HIGH); // LED light active
  } else {
    digitalWrite(LED_PIN, LOW); // LED light off
  }
  
  delay(10); // time that light is on
}
```

In this project, we read the value from the photo transistor using the `analogRead` function and compare it to a `LIGHT_THRESHOLD` value that you can adjust based on your specific circuit and sound environment. If the light level exceeds the threshold, we turn on the LED by setting the `LED_PIN` to `HIGH`.
