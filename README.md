# BastWAN

BastWAN is all the best in the world format Feather and LoRa with a RAK4260 core, 32 bits of power!, Feather pin to pin compatible with a micro USB port.

BastWAN is supported in the [Arduino development environment](https://github.com/ElectronicCats/ArduinoCore-samd) and [RIOT OS on BastWan and LowPower](https://github.com/h-filzer/samr34-lorawan-smt50).

We love all our Feathers equally, but this Feather is very special.

That doesn't mean you cant also use it with Arduino IDE! At the Bast's heart is an RAK4260 ARM Cortex M0+ processor, clocked at 48 MHz and at 3.3V logic, the same one used in the new Arduino Zero. This chip has a whopping 256K of FLASH (8x more than the Atmega328 or 32u4) and 32K of RAM (16x as much)! This chip comes with built in USB so it has USB-to-Serial program & debug capability built in with no need for an FTDI-like chip.

Here's some handy specs!

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

The Bast WAN  uses the extra space left over to add a Cryptographic chip ATECC608A.

Easy reprogramming: the Bast-WAN comes pre-loaded with the UF2 bootloader, which looks like a USB storage key. Simply drag firmware on to program, no special tools or drivers needed! It can be used to load up CircuitPython, PXT MakeCode or Arduino IDE (it is bossa-compatible)

Comes fully assembled and tested, with the UF2 USB bootloader. We also toss in some header so you can solder it in and plug into a solderless breadboard. 

Lipoly battery and USB cable not included (but we do have lots of options in the shop if you'd like!)

<a href="https://electroniccats.com/store/bastwan/">
  <img src="https://electroniccats.com/wp-content/uploads/badge_store.png" width="200" height="104" />
</a>

## Wiki and Getting Started

[Getting Started in our Wiki](https://github.com/ElectronicCats/BastWAN/wiki)

<img src="https://raw.githubusercontent.com/wiki/ElectronicCats/BastWAN/assets/BastWAN.jpg" />

## Links & References

* [Hackster Blog post](https://www.hackster.io/electronic-cats/how-to-use-rak4260-with-arduino-ide-4bcff2)
* [Additional Boards Manager to install BastWan in Arduino IDE](https://electroniccats.github.io/Arduino_Boards_Index/package_electroniccats_index.json)
* [LoRa library](https://github.com/sandeepmistry/arduino-LoRa)
* [Bast-Wan repository](https://github.com/ElectronicCats/Bast-WAN)
* [Kongduino's blog post](https://kongduino.wordpress.com/2020/07/24/bastwan/)

# License

![OpenSourceLicense](https://github.com/ElectronicCats/AjoloteBoard/raw/master/OpenSourceLicense.png)

Electronic Cats invests time and resources providing this open source design, please support Electronic Cats and open-source hardware by purchasing products from Electronic Cats!

Designed by Electronic Cats.

Firmware released under an GNU AGPL v3.0 license. See the LICENSE file for more information.

Hardware released under an CERN Open Hardware Licence v1.2. See the LICENSE_HARDWARE file for more information.

Electronic Cats is a registered trademark, please do not use if you sell these PCBs.

November 2019
