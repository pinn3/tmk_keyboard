/**
 * http://www.instructables.com/id/USB-Mouse-Made-Out-Of-A-Wii-Nunchuck/
 * https://www.pjrc.com/teensy/usb_mouse.html
 * https://www.pjrc.com/teensy/usb_keyboard.html
 * https://www.pjrc.com/teensy/adc.html
 * https://www.adafruit.com/images/970x728/444-02.jpg
 */

#include <avr/io.h>
#include "stdint.h"

/**
 * include "led.h"
 *
 *
 * void led_set(uint8_t usb_led)
 * {
 *   if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
 *     // output low
 *     DDRB |= (1<<2);
 *     PORTB &= ~(1<<2);
 *   } else {
 *     // Hi-Z
 *     DDRB &= ~(1<<2);
 *     PORTB &= ~(1<<2);
 *   }
 * }
 */
