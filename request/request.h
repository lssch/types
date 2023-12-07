//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_REQUEST_H
#define TYPES_REQUEST_H

#include <cstdint>

namespace Request {
  class Request {
  public:
    uint8_t safe_parameter;
    uint8_t calibrate_imu;
    uint8_t emergency_stop;
    uint8_t emergency_stop_reset;
    uint8_t hardware_reset;
    struct __attribute__((packed)) {
      int8_t throttle;
      int16_t steering;
    } controls;
  };
}

#endif //TYPES_REQUEST_H
