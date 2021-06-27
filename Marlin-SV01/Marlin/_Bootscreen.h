/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#pragma once

#define CUSTOM_BOOTSCREEN_BMPWIDTH  128

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000001,B11111111,B11111110,B00000000,B00011110,B01111000,B00000111,B11100000,B00000000,B00111110,B00000000,B11110011,B11000000,B00000011,B11000000,B00000000,
  B00000111,B11111111,B11111110,B00000000,B11111110,B01111111,B00000111,B11100000,B00000000,B00111110,B00000111,B11110011,B11111000,B00000011,B11000000,B00000000,
  B00001111,B11111111,B11111110,B00000001,B11111110,B01111111,B00000011,B11110000,B00000000,B01111110,B00001111,B11110011,B11111100,B00000011,B11000000,B00000000,
  B00011111,B11111111,B11111110,B00000011,B11111110,B01111111,B10000011,B11110000,B00000000,B01111110,B00011111,B11110011,B11111110,B00000011,B11000000,B00000000,
  B00011111,B11111111,B11111110,B00000111,B11111110,B01111111,B11000001,B11111000,B00000000,B11111100,B00111111,B11110011,B11111111,B00000011,B11000000,B00000000,
  B00111111,B10000000,B00000000,B00001111,B11100000,B00000111,B11100001,B11111000,B00000000,B11111100,B01111111,B00000000,B00111111,B10000011,B11000000,B00000000,
  B00111111,B00000000,B00000000,B00001111,B11100000,B00000111,B11100000,B11111100,B00000001,B11111000,B01111111,B00000000,B00111111,B10000011,B11000000,B00000000,
  B00111111,B00000000,B00000000,B00001111,B11000000,B00000011,B11100000,B11111100,B00000001,B11111000,B01111110,B00000000,B00011111,B10000011,B11000000,B00000000,
  B00111111,B00000000,B00000000,B00001111,B11000000,B00000011,B11100000,B01111100,B00000001,B11110000,B01111110,B00000000,B00011111,B10000011,B11000000,B00000000,
  B00111111,B10000000,B00000000,B00011111,B10000000,B00000001,B11110000,B01111110,B00000011,B11110000,B11111100,B00000000,B00001111,B11000011,B11000000,B00000000,
  B00111111,B11100000,B00000000,B00011111,B10000000,B00000001,B11110000,B01111110,B00000011,B11110000,B11111100,B00000000,B00001111,B11000011,B11000000,B00000000,
  B00011111,B11111111,B11111000,B00011111,B10000000,B00000001,B11110000,B00111110,B00000011,B11100000,B11111100,B00000000,B00001111,B11000011,B11000000,B00000000,
  B00000111,B11111111,B11111110,B00011111,B10000000,B00000001,B11110000,B00011111,B00000111,B11000000,B11111100,B00000000,B00001111,B11000011,B11000000,B00000000,
  B00000011,B11111111,B11111111,B00011111,B10000000,B00000001,B11110000,B00011111,B10001111,B11000000,B11111100,B00000000,B00001111,B11000011,B11000000,B00000000,
  B00000000,B00000000,B01111111,B10011111,B10000000,B00000001,B11110000,B00011111,B10001111,B11000000,B11111100,B00000000,B00001111,B11000011,B11000000,B00000000,
  B00000000,B00000000,B00111111,B10011111,B10000000,B00000001,B11110000,B00001111,B10001111,B10000000,B11111100,B00000000,B00001111,B11000011,B11000000,B00000000,
  B00000000,B00000000,B00011111,B10011111,B11000000,B00000011,B11110000,B00001111,B11011111,B10000000,B11111110,B00000000,B00011111,B11000011,B11000000,B00000000,
  B00000000,B00000000,B00011111,B10001111,B11000000,B00000011,B11100000,B00000111,B11011111,B00000000,B01111110,B00000000,B00011111,B10000011,B11000000,B00000000,
  B00000000,B00000000,B00011111,B10001111,B11100000,B00000111,B11100000,B00000111,B11111111,B00000000,B01111111,B00000000,B00111111,B10000011,B11100000,B00000000,
  B00000000,B00000000,B00111111,B10001111,B11100000,B00000111,B11100000,B00000011,B11111110,B00000000,B01111111,B00000000,B00111111,B10000011,B11100000,B00000000,
  B00011111,B11111111,B11111111,B00000111,B11111110,B01111111,B11000000,B00000011,B11111110,B00000000,B00111111,B11110011,B11111111,B00000011,B11111111,B11111100,
  B00011111,B11111111,B11111111,B00000011,B11111110,B01111111,B10000000,B00000011,B11111110,B00000000,B00011111,B11110011,B11111110,B00000011,B11111111,B11111100,
  B00011111,B11111111,B11111110,B00000001,B11111110,B01111111,B00000000,B00000001,B11111100,B00000000,B00001111,B11110011,B11111100,B00000001,B11111111,B11111100,
  B00011111,B11111111,B11111100,B00000000,B11111110,B01111111,B00000000,B00000001,B11111100,B00000000,B00000111,B11110011,B11111000,B00000000,B11111111,B11111100,
  B00011111,B11111111,B11110000,B00000000,B00011110,B01111000,B00000000,B00000000,B11111000,B00000000,B00000000,B11110011,B11000000,B00000000,B00111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B01000001,B00111110,B00111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B01000001,B00000010,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00100010,B00001110,B00111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00010100,B00000010,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00001000,B00111110,B10111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001000,B00110000,B00000000,B01000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00100000,B10000000,B00001001,B00100100,B00000000,B01000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00110001,B10000000,B00001000,B00100000,B00000000,B01000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00110001,B10011110,B01111001,B00110100,B11110011,B11000001,B11101101,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00101010,B10010010,B01001001,B00100100,B10010010,B01000001,B00110101,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00101010,B10010010,B01001001,B00100100,B11100010,B01000001,B00010101,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00100100,B10010010,B01001001,B00100100,B10000010,B01000001,B00110111,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00100100,B10011110,B01111001,B00100100,B11110011,B11000001,B11100010,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00100010,B00111110,B01011111,B00100011,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00100001,B01000001,B01101001,B00100100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00100001,B00111111,B01001001,B00100011,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00100010,B01000001,B01001001,B00100000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00111111,B01001001,B00100011,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};