# AM68 Computer

This project is a AM68 computer were Linux can be deployed onto.
The circuit board is made in Altium CircuitMaker. 

This is a continuation of [STM32-Computer](https://github.com/DanielMartensson/STM32-Computer). 
Here a better processor and better RAM memory will be used.

# Operating system to the board

Here is `AM68-OS` system for the board.

https://github.com/danielmartensson/AM68-OS (Project not created yet at Github)

# URL to the board

Schematics and 3D model, made in Altium CircuitMaker.

https://workspace.circuitmaker.com/Projects/Details/DanielMrtensson/AM6-Computer (Project not created yet at CircuitMaker.com)

# Status

* 2025-06-21: Initializing the project

# Features

* Processor: AM69A98ATGGHAALYR
* Stack layers: <UPDATE>
* ARM Cortex A72 64-bit Octal Core at 2.0 GHz
* 4 x 32-bit 4 GB LPDDR4 RAM memory at 2.1 GHz
* 1 x Display Port
* 2 x CAN channels
* 4 x USB A
<<<<<<< HEAD
* 1 x Camera Serial Interface
=======
* 2 x Microphones
>>>>>>> 1fea55ae38f418c7e0dc0d7093924830c82c00dd
* 1 x USB C
* 1 x I2C pins
* 1 x 8 GB eMMC
* 1 x Gigabit Ethernet
* 1 x PCI Express Mini
* 1 x Coin cell battery holder
* Size: ? mm x ? mm
* Thickness: 1.52 mm
* 3 x Mounting pads of M2.5
* Debug: JTAG
* Power supply: 5V DC jack

# Notes

To produce this board, the manufacture need to have these minimum capabilities:

* 0.1 mm minimum electrical clearance between traces pads and vias
* 0.09 mm minimum electrical clearance between BGA pads and traces
* Capability to cut the edge of the BGA pads if the minimum electrical clearance between BGA pads and traces are above 0.09 mm
* 0.09 mm minimum width of traces
* Via-in-pad according to IPC 4761 Type VII (Epoxy filled and capped)
* Via hole size of 0.3 mm and via diameter of 0.4 mm
* Impedance control: JLC04161H-1080

I have been using JLCPCB as the manufacturer for this.

# Pictures

