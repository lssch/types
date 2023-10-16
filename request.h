//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_REQUEST_H
#define TYPES_REQUEST_H

typedef struct _request_t {
  uint8_t safe_parameter;
  uint8_t mpu;
  struct {
    int16_t throttle;
    int16_t steering;
  } __attribute__((packed)) controls;
} __attribute__((packed)) request_t;

#endif //TYPES_REQUEST_H
