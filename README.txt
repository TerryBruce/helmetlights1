Helmet lights
Terry Bruce
jtindiepodcast@gmail.com

This is the first version of the arduino code for a set of lights
I want to build into/onto my bicycle helmet. I am using the neopixel
strips from Adafruit (http://www.adafruit.com/products/1426). I am
using them instead of simple LEDs for several reasons. 
1. While they are more expensive they are much easier to program
2. The neopixels are RGB and can be programmed for many different
   colors
3. Having the LED's mounted on a PCB makes them much easier to mount

The plan is to have 2 sets of lights (i.e. 4 neopixel strips) with
neopixels numbered 0-7, 8-15, 16-23, and 24-31 mounted on the rear side
of the helmet and 2 neopixel rings (http://www.adafruit.com/products/1463)
mounted into a set of mock goggles (http://www.adafruit.com/products/1577)

The Rear facing lights will be used as red rear warning lights.
The front facing lights will be used as a "Be Seen" set of lights, not a 
"See" set of lights. I would like to as a single pixels in the center of
goggles. being able to add an animation of an eye.
  