//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_STATE_H
#define TYPES_STATE_H

#include <cstdint>
#include <ostream>

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

  enum class TofSpot : uint8_t {
    VALID_DATA = 0x00,
    VCSEL_SHORT = 0x01,
    LOW_SIGNAL = 0x02,
    LOW_SN = 0x04,
    TOO_MUCH_AMB = 0x08,
    WAF = 0x10,
    CAL_ERROR = 0x20,
    CROSSTALK_ERROR = 0x80,
  };

  class State {
  public:
    Robocar robocar;
    Imu imu;
    TofSpot tof_spot;

    friend std::ostream& operator<<(std::ostream& os, const State& state);
  };
}

#endif //TYPES_STATE_H
