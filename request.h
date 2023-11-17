//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_REQUEST_H
#define TYPES_REQUEST_H

namespace Request {
  class __attribute__ ((__packed__)) Request {
  public:
    uint8_t safe_parameter;
    uint8_t mpu;
    struct {
      int16_t throttle;
      int16_t steering;
    } __attribute__((packed)) controls;
  };
}

#endif //TYPES_REQUEST_H
