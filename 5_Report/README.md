# Distance Measurement Using Ultrasonic Sensor
## What is Ultrasonic sensor
*   An ultrasonic sensor is an instrument that measures the distance to an object using ultrasonic sound waves. 
*   An ultrasonic sensor uses a transducer to send and receive ultrasonic pulses that relay back information about an object’s proximity. 
*   High-frequency sound waves reflect from boundaries to produce distinct echo patterns.
### How Ultrasonic sensor works
Ultrasonic sensors work by sending out a sound wave at a frequency above the range of human hearing.  The transducer of the sensor acts as a microphone to receive and send the ultrasonic sound. Our ultrasonic sensors, like many others, use a single transducer to send a pulse and to receive the echo.  The sensor determines the distance to a target by measuring time lapses between the sending and receiving of the ultrasonic pulse.
The working principle of this module is simple.  It sends an ultrasonic pulse out at 40kHz which travels through the air and if there is an obstacle or object, it will bounce back to the sensor.  By calculating the travel time and the speed of sound, the distance can be calculated. Ultrasonic sensors are a great solution for the detection of clear objects.  For liquid level measurement, applications that use infrared sensors, for instance, struggle with this particular use case because of target translucence. For presence detection, ultrasonic sensors detect objects regardless of the color, surface, or material (unless the material is very soft like wool, as it would absorb sound. To detect transparent and other items where optical technologies may fail, ultrasonic sensors are a reliable choice. 
### Features of the Ultrasonic Sensor Module
*   High level signal is sent for 10us using Trigger.
*   The module sends eight 40 KHz signals automatically, and then detects whether pulse is received or not.
*   If the signal is received, then it is through high level. The time of high duration is the time gap between sending and receiving the signal.
*   Specifications : Power Supply: +5V DC; Quiescent Current : <2mA; Working Current: 15mA; Effectual Angle: <15°; Ranging Distance : 2cm – 400 cm/1″ – 13ft; Resolution : 0.3 cm; Measuring Angle: 30 degree; Trigger Input Pulse width: 10uS; Dimension: 45mm x 20mm x 15mm
## SWOT Analysis
### Strengths
*   It has sensing capability to sense all the material types.
*   This sensor is not affected due to atmospheric dust, rain, snow etc.
*   It can work in any adverse conditions.
*   It has higher sensing distance (in centimeters and inches) compare to inductive/capacitive proximity sensor types.
*   It provides good readings in sensing large sized objects with hard surfaces.
### Weaknesses
*   It is very sensitive to variation in the temperature.
*   It has more difficulties in reading reflections from soft, curved, thin and small objects.
### Opportunities
*   They have greater accuracy than many other methods at measuring thickness and distance to a parallel surface.
*   Their high frequency, sensitivity, and penetrating power make it easy to detect external or deep objects.
### Threats
*   Limited testing distance
*   Inaccurate readings
*   Inflexible scanning methods
### 4W's and 1'H 
*   Who :The importance of the project is calculating accurate distance from any obstacle that we want to measure. Ultrasonic sensors are used primarily as proximity sensors. They can be found in automobile self-parking technology and anti-collision safety systems.
*   What :As the name indicates, ultrasonic sensors measure distance by using ultrasonic waves. The sensor head emits an ultrasonic wave and receives the wave reflected back from the target. Ultrasonic Sensors measure the distance to the target by measuring the time between the emission and reception.
*   When :Ultrasonic sensors can measure the distance to a wide range of objects regardless of shape, color or surface texture. They are also able to measure an approaching or receding object. By using “non-contact” ultrasonic sensors, distances can be measured without damage to the object.
*   Where :The device can be used in many different fields and categories like distance calculation in construction field, robots, car sensor to avoid obstacles and many other applications.
*   How :Ultrasonic sensors are useful for measuring distances. Ultrasonic waves are transmitted and whenever these strike an obstacle and return back in the from of an echo. Difference of outgoing sound and returning echo gives us the distance.
### Requirements
### High Level Requirement
| ID | Description | Status |
| ----- | ----- | ----- |
| 1. | The high-level signal is sent to 10 microseconds using Trigger | Implemented |
| 2. | The module sends 40 KHz signals automatically and then detects whether the pulse is received or not through Echo| Implemented |
| 3. | Capable of measuring a distance of up to 400 cm| Implemented |
| 4. | It can be further enhanced by implementing improvements especially in its accuracy and portability | Future |
### Low Level Requirements
| ID | Description | Status |
| ----- | ----- | ----- |
| 1. | Suitable for close range detection up to ten meters | Implemented |
| 2. | Provide multiple range measurements per second| Implemented |
# Flow chart
![144277447-b0eda2d4-9b31-4f8f-a349-e3bbe423671b](https://user-images.githubusercontent.com/94165024/144281526-d45b2372-485c-4c40-b3ce-0016293e1ce0.png)
# Block Diagram
![144278354-61e95040-def3-44ca-8e17-594f5c081622](https://user-images.githubusercontent.com/94165024/144281749-e69a6816-dfc0-4640-9acb-07324782cb91.png)
# Structural Diagram
![144278615-f3f99fe9-3936-4da7-a4d3-861b8ac82368](https://user-images.githubusercontent.com/94165024/144282074-f52be04f-240c-40c4-8060-697b03291ca9.png)
### Before measuring distance
![Distance_1](https://user-images.githubusercontent.com/94165024/144283077-2827d803-9689-4279-8e8d-bddf296715ac.jpeg)
### Measuring distance from an object
![Distance](https://user-images.githubusercontent.com/94165024/144283088-c640eea5-0200-4306-a498-ac3e1c9a7598.jpeg)
# TEST PLAN:
### Table no: High level test plan
| Test ID |           Description       |      Exp I/P    |    Exp O/P   |   Actual Out  |   Type Of Test |
| --------| --------------------------- | --------------- | ------------ | ------------- | -------------- |
|  HL_01   | Capable of measuring a distance of up to 400 cm | Choice  |  Display    |   As Expected | Requirement Based |
|  HL_02   |      High accuracy     |  Choice  |    Display   |   As Expected | Scenario based |
|  HL_03   | Measuring time lapses between the sending and receiving of the ultrasonic pulse | Choice | Display   |   As Expected | Requirement Based |

### Table no: Low level test plan
| Test ID |           Description       |      Exp I/P    |    Exp O/P   |   Actual Out  |   Type Of Test |
| --------| --------------------------- | --------------- | ------------ | ------------- | -------------- |
|  LL_01   | Detection of clear objects | Choice | Display  | As Expected   | Scenario based |
|  LL_02   | Provide multiple range measurements per second | Choice | Display   | As Expected  | Requirement Based |
