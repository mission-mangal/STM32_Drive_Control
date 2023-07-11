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
