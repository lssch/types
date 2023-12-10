//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_STATE_H
#define TYPES_STATE_H

namespace State {
  enum class Robocar : uint8_t {
    INITIALISING = 0,
    RUNNING,
    EMS,
  };


  enum class Imu : uint8_t {
    DISCONNECTED = 0,
    UNCALIBRATED,
    CALIBRATING,
    CALIBRATED,
    FAULT,
  };

  class State {
  public:
    Robocar robocar;
    Imu imu;
  };
}

#endif //TYPES_STATE_H
