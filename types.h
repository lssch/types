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

typedef union robocar_data_t_{
  struct {
    State::State state;
    Sensor::Sensor sensor;
    Data::Data data;
    Parameter::Parameter parameter;
    Request::Request request;
  };
  uint8_t buffer[
    sizeof(State::State) +
    sizeof(Sensor::Sensor) +
    sizeof(Data::Data) +
    sizeof(Parameter::Parameter) +
    sizeof(Request::Request)];
} robocar_data_t;

#endif //TYPES_H
