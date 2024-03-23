# ArduinoLCDClock
A simple Arduino LCD clock project with a time-setting function.

Required Hardware and Components
--------------------------------
- Arduino Uno (x1)
- LCD 16x2 (x1)
- 10K Ohm Potentiometer (x1) 
- Breadboard (x1)
- Jumper Wires
- Pushbutton (x2)

Connections
-----------
LCD:
  - VSS to GND
  - VDD to 5V
  - VO to 10K Ohm Potentiometer Center Pin
  - RS to Arduino digital pin 12
  - RW to GND
  - E to Arduino digital pin 11
  - D4 to Arduino digital pin 5
  - D5 to Arduino digital pin 4
  - D6 to Arduino digital pin 3
  - D7 to Arduino digital pin 2
  - A to 5V
  - K to GND

Pushbuttons:
  - 1st button to Arduino digital pin 0 and GND
  - 2nd button to Arduino digital pin 1 and GND

Schematic
---------
![ArduinoLCDClock-scheme](https://github.com/toria31/ArduinoLCDClock/assets/146465408/6c01bf44-7928-4f76-bcd8-b5441abcfb3e)
