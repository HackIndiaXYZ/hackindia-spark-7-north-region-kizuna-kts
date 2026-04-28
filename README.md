# hackindia-spark-7-north-region-kizuna-kts
Hackathon team repository for Kizuna Kōtsū - [hackindia-team:hackindia-spark-7-north-region:kizuna-kts]

We are Team Kizuna Kotsu, and our project is a Rear Car Communicator System designed especially for highways, fog areas, hilly roads, and blind turns, where many accidents happen because drivers cannot understand signals from the vehicle in front.

Problem Statement: Road Safety

On highways and mountain roads, accidents happen because:

Rear drivers cannot understand front vehicle intentions
Unsafe overtaking on curves or hills
Sudden braking without warning
Low visibility in fog or night
No clear communication between drivers
Delay in human reaction time

This creates dangerous situations and leads to crashes.

Our Solution

We developed a low-cost smart hardware communication system placed at the rear side of the vehicle.

Our system works using 4 physical buttons, which display messages/signals instantly on the rear LED screen.

4 Main Buttons Functions:
Pass Left → Rear vehicle should overtake from left side
Pass Right → Rear vehicle should overtake from right side
Stop / Wait → Warning to slow down or stop
Clear / Normal Mode → Reset display

This gives clear communication to the vehicle behind.

Physical Components Used
Arduino UNO → Main controller of the project
MAX7219 LED Matrix Display → To show arrows/messages clearly behind vehicle
4 Push Buttons → Manual controls for signals
Buzzer → Audio indication while command is active
DC-DC Buck Converter → Power regulation for stable voltage supply
Jumper Wires → Connections between components
Cardboard Prototype Model → Vehicle demo model
Software Used
Arduino C++ Programming for controlling buttons and display logic.
Why We Used These Components?
Arduino UNO because it is easy to program and reliable
LED Matrix because signals are visible from long distance
Buttons because they are simple and fast to operate
Buzzer for extra alert indication
Buck Converter to safely convert vehicle battery voltage
Key Advantages
Low-cost and practical solution
Easy to install in buses, trucks, and cars
Useful in highways and hilly regions
Reduces overtaking confusion
Improves road communication
Helps prevent accidents
Future Scope
Voice control system
Wireless mobile control
Auto braking warning sensor
Fog detection mode
GPS emergency alerts
Final Line

Our project is not just a device, it is a smart road safety solution that can save lives by improving communication between vehicles.
