//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_STATE_H
#define TYPES_STATE_H

namespace State {
  enum class Mpu : uint8_t {
    DISCONNECTED = 0,
    UNCALIBRATED,
    CALIBRATING,
    CALIBRATED,
    FAULT,
  };

  class __attribute__ ((__packed__)) State {
  public:
    Mpu mpu;
    struct {
      uint8_t load;
      uint8_t clock;
    } __attribute__((packed)) cpu;
  };
}

#endif //TYPES_STATE_H
