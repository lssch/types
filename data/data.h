//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_DATA_H
#define TYPES_DATA_H

#include "types/Cartesian.h"

namespace Data {
  class Imu {
  public:
    Cartesian3<float> gyro_calibration_values;
  };

  class Data {
  public:
    Imu imu;
    uint16_t distance_to_target;
    uint8_t velocity;
  };
}

#endif //TYPES_DATA_H
