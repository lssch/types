//
// Created by Lars Schwarz on 25.07.23.
//

#ifndef TYPES_H
#define TYPES_H

#include "types/request/request.h"
#include "types/sensor/sensor.h"
#include "types/data/data.h"
#include "types/parameter/parameter.h"
#include "types/state/state.h"

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
