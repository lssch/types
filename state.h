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

  class State {
  public:
    Imu imu;
    struct {
      uint8_t load;
      uint8_t clock;
    } cpu;
  };
}

#endif //TYPES_STATE_H
