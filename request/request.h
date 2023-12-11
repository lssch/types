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

  typedef struct {
    bool safe_parameter:1;
    bool calibrate_imu:1;
    bool emergency_stop:1;
    bool hardware_reset:1;
  } test;

  class Request {
  public:
    OperatingMode operating_mode;
    MaxSpeed max_speed;
    uint8_t safe_parameter;
    uint8_t calibrate_imu;
    uint8_t emergency_stop;
    uint8_t hardware_reset;
    struct __attribute__((packed)) {
      int8_t throttle;
      int16_t steering;
    } controls;

    friend std::ostream& operator<<(std::ostream& os, const Request& request);
  };
}

#endif //TYPES_REQUEST_H
