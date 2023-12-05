//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_STATE_H
#define TYPES_STATE_H

namespace State {
  enum class Imu : uint8_t {
    DISCONNECTED = 0,
    UNCALIBRATED,
    CALIBRATING,
    CALIBRATED,
    FAULT,
  };

  enum class Microcontroller : uint8_t {
    UNDEFINED = 0,
    INITIALISING,
    RUNNING,
    ERROR
  };

  class State {
  public:
    Imu imu;
    Microcontroller microcontroller;
    struct {
      uint8_t load;
      uint8_t clock;
    } cpu;
  };
}

#endif //TYPES_STATE_H
