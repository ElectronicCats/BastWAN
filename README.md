# Bast-WAN

Bast WAN is all the best in the world format Feather and LoRa with a RAK4260 core, 32 bits of power!, Feather pin to pin compatible with a micro USB port.

Bast-WAN is supported in the [Arduino development environment](https://github.com/ElectronicCats/ArduinoCore-samd).

We love all our Feathers equally, but this Feather is very special. It's our first Feather that is specifically designed for use with CircuitPython! CircuitPython is our beginner-oriented flavor of MicroPython - and as the name hints at, its a small but full-featured version of the popular Python programming language specifically for use with circuitry and electronics.

Please note, CircuitPython does not come preloaded. See the full guide linked below for instructions on installing it.

That doesn't mean you cant also use it with Arduino IDE! At the Bast's heart is an RAK4260 ARM Cortex M0+ processor, clocked at 48 MHz and at 3.3V logic, the same one used in the new Arduino Zero. This chip has a whopping 256K of FLASH (8x more than the Atmega328 or 32u4) and 32K of RAM (16x as much)! This chip comes with built in USB so it has USB-to-Serial program & debug capability built in with no need for an FTDI-like chip.

Here's some handy specs!

- Measures 2.0" x 0.9" x 0.28" (51mm x 23mm x 8mm) without headers soldered in
- Light as a (large?) feather - 5 grams
- RAK4260 @ 48MHz with 3.3V logic/power
- 256KB of FLASH + 32KB of RAM
- No EEPROM
- 32.768 KHz crystal for clock generation & RTC
- 3.3V regulator with 500mA peak current output
- USB native support, comes with USB bootloader and serial port debugging
- You also get tons of pins - 20 GPIO pins
- Hardware Serial, hardware I2C, hardware SPI support
- PWM outputs on all pins
- 6 x 12-bit analog inputs
- 1 x 10-bit analog ouput (DAC)
- Built in 100mA lipoly charger with charging status indicator LED
- Pin #13 red LED for general purpose blinking
- Power/enable pin
- 4 mounting holes
- Reset button

### LoRa Features

- Industry's lowest power LoRa® SiP device
- Fully supported 862 to 1020 MHz frequency coverage
- Receive Sensitivity down to -148 dBm
- Maximum Transmit Power up to 20 dBm
- Low RX current of 17mA (typical)  LoRa Technology, (G)FSK, (G)MSK

The Bast WAN  uses the extra space left over to add a Cryptographic chip ATECC608A-TNGLORA and 2 MB SPI Flash storage. You can use the SPI Flash storage like a very tiny hard drive. When used in CircuitPython, the 2 MB flash acts as storage for all your scripts, libraries and files. When used in Arduino, you can read/write files to it, like a little datalogger or SD card, and then with our helper program, access the files over USB.

Easy reprogramming: the Bast-WAN comes pre-loaded with the UF2 bootloader, which looks like a USB storage key. Simply drag firmware on to program, no special tools or drivers needed! It can be used to load up CircuitPython, PXT MakeCode or Arduino IDE (it is bossa-compatible)

Comes fully assembled and tested, with the UF2 USB bootloader. We also toss in some header so you can solder it in and plug into a solderless breadboard. 

Lipoly battery and USB cable not included (but we do have lots of options in the shop if you'd like!)

# License

Electronic Cats invests time and resources providing this open source design, please support Electronic Cats and open-source hardware by purchasing products from Electronic Cats!

Designed by Electronic Cats.

Firmware released under an GNU AGPL v3.0 license. See the LICENSE file for more information.

Hardware released under an CERN Open Hardware Licence v1.2. See the LICENSE_HARDWARE file for more information.

Electronic Cats is a registered trademark, please do not use if you sell these PCBs.

November 2019
