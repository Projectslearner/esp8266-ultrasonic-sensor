### ESP8266 Ultrasonic Sensor Project

#### Project Overview
This project demonstrates how to use an ESP8266 microcontroller with an ultrasonic sensor to measure distance accurately. Ultrasonic sensors are widely used in applications such as robotics, distance measurement, and automation for non-contact distance sensing.

#### Components Needed
- **ESP8266 Microcontroller**
- **Ultrasonic Sensor (HC-SR04)**
- **Jumper Wires**
- **Breadboard**
- **Power Supply**

#### Block diagram


#### Circuit Setup
1. **Connecting the Ultrasonic Sensor to ESP8266:**
   - Connect the Trig pin of the ultrasonic sensor to GPIO pin D1 on the ESP8266.
   - Connect the Echo pin of the ultrasonic sensor to GPIO pin D2 on the ESP8266.
   - Ensure a common ground (GND) connection between the ESP8266 and the ultrasonic sensor.

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600 for debugging purposes.
   - Set the pinMode for `trigPin` as OUTPUT and `echoPin` as INPUT.

2. **Operation:**
   - In the `loop()` function:
     - Generate a short LOW-HIGH-LOW pulse on the `trigPin` to initiate a measurement.
     - Measure the duration of the echo pulse on the `echoPin` using `pulseIn()` function.
     - Calculate the distance in centimeters based on the duration of the echo pulse.
     - Print the measured distance to the Serial Monitor.
     - Add a delay (`delay(1000)`) between readings to avoid rapid sensor data fluctuations.

3. **Considerations:**
   - **Distance Calculation:** The distance calculation (`distance_cm = duration * 0.034 / 2`) is based on the speed of sound (approximately 34,000 cm/s).
   - **Sensor Placement:** Ensure the ultrasonic sensor has a clear line of sight to the object being measured for accurate distance readings.
   - **Power Supply:** Provide stable power to both ESP8266 and the ultrasonic sensor for reliable operation.

#### Applications
- **Robotics:** Obstacle detection and avoidance for autonomous robots.
- **Automation:** Proximity sensing in automated systems.
- **Distance Measurement:** Non-contact distance measurement in various applications.

#### Notes
- **Timing Considerations:** Adjust timing parameters based on specific sensor requirements and environmental conditions.
- **Serial Output:** Utilize the Serial Monitor to observe and debug distance measurements and sensor operations.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Ultrasonic Sensor](https://projectslearner.com/learn/esp8266-ultrasonic-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner