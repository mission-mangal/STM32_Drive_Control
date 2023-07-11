# STM32_Drive_Control

## Components Required
- STM32F103C8T6
- ST-Link V2 programmer
- MDDS30 Dual motor driver
- RMCS 2088 DC encoder motors

## Setup
- Create a project on STM32F103C8 generic board using arduino framework in platform io in a your workspace. Creating the project in a workspace is important otherwise the code will not work as expected.
- Add necessary flags in the .ini file to access the USB serial monitor.
- Add library files in src folder.

## Hardware Connections
- Use the following pinout diagram for STM32duino.
  ![image](https://github.com/mission-mangal/STM32_Drive_Control/assets/113725445/d57a49fa-bf94-44ec-a1d5-68524a1fbeec)
- As so many pins are being used, color coding of wires can reduce confusion.
- Use connectors and soldering methods to make perfect connections.
- Before using any wire check whether it is short on both terminals using a multimeter.
- Use only dedicated pins for digital output (marked as D1,D2 etc.) and PWM (marked as pwm1/2 etc.).
- For digital input you can use any pin.
- Always try different combinations for pins, because motor may not work for every combination.
- Try not to use USB DP and USB DM pins (PA12, PA11), they will be used for serial monitor. If platform io is not detecting serial monitor, this might be the problem.


After all this testing make a PCB to eliminate hardware errors.
