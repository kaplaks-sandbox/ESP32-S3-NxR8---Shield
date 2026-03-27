# ESP32-S3-Dev-Kit-N8R8 Kit Shield

This board acts as a carrier for the ESP32-S3-Dev-Kit-N8R8 Micro-Controller.
The Printed Circuit Boards( PCBs) are designed using DipTrace.
A free DipTrace viewer is available to view the design files. https://diptrace.com/download/download-diptrace/

The goal is to have a fairly universal board for these micro-controllers that can be adapted to a variety of small projects.
The I2C and SPI interfaces should also align with the pinouts of other Micro-Controller shields I made - thus pheripherals can be used on either micro-controller shield.

#### Circuit Description
It consists of a Power Input with two adjustable voltage regulators to provide a 3V3 and 5V supply for use by the controller and pheripherals.

There 3 x I2C interfaces and 3 x SPI interfaces.
An ADC interface

With the ESP32 - IO pins can have a number of functions. Refer to the diagram for where these are connected and what could be done.

#### Assembly
The Micro-Controller is mounted on headers to make it easier for future replacements/repairs.
Almost all the components are mounted on the c-side including the Micro-Controller.
However most of the connectors for the SPI and I2C devices can be mounted on the other side - if that would be easier.
Refer to the Silkscreen text.

---

#### PCB Images

**Diagram**
![Diagram](ESP32-S3-NxR8-Shield%20v1%20-%20Dev/Diagram.png)

**PCB Top**
![Top](ESP32-S3-NxR8-Shield%20v1%20-%20Dev/Top.png)

**PCB Bottom**
![Bottom](ESP32-S3-NxR8-Shield%20v1%20-%20Dev/Bot.png)

**3D View**
![3D View](ESP32-S3-NxR8-Shield%20v1%20-%20Dev/3D-View.png)

