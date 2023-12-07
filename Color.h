//
// Created by Lars Schwarz on 07.12.2023.
//

#ifndef COLOR_H
#define COLOR_H

#include <cstdint>

class RGB {
public:
  uint8_t red;
  uint8_t green;
  uint8_t blue;
};

class RGBA {
public:
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t alpha;
};

#endif //COLOR_H
