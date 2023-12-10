//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_REQUEST_H
#define TYPES_REQUEST_H

#include <ostream>
#include <cstdint>

namespace Request {
  enum class OperatingMode: uint8_t {
    MANUAL = 0,
    ASSISTED,
    DISTANCE,
    AUTONOMOUS
  };

  enum class MaxSpeed: uint8_t {
    SLOW = 0,
    MEDIUM,
    FULL_SPEED
  };

  class Request {
  public:
    OperatingMode operating_mode;
    MaxSpeed max_speed;
    struct {
      bool safe_parameter:1;
      bool calibrate_imu:1;
      bool emergency_stop:1;
      bool hardware_reset:1;
    };
    struct __attribute__((packed)) {
      int8_t throttle;
      int16_t steering;
    } controls;

    friend std::ostream& operator<<(std::ostream& os, const Request& request);
  };
}

#endif //TYPES_REQUEST_H
