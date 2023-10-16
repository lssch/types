//
// Created by Lars Schwarz on 25.07.23.
//

#ifndef TYPES_H
#define TYPES_H

#include "request.h"
#include "sensor.h"
#include "data.h"
#include "parameter.h"
#include "state.h"

typedef union _robocar_data_t {
  struct {
    state_t state;
    sensor_t sensor;
    data_t data;
    parameter_t parameter;
    request_t request;
  } __attribute__((packed));
  uint8_t buffer[
          sizeof(state_t) +
          sizeof(sensor_t) +
          sizeof(data_t) +
          sizeof(parameter_t) +
          sizeof(request_t)];
} robocar_data_t;

#endif //TYPES_H
