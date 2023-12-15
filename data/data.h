//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_DATA_H
#define TYPES_DATA_H

#include "types/Cartesian.h"
#include <ostream>

namespace Data {
  class Imu {
  public:
    Cartesian3<float> gyro_calibration_values;
  };

  class __attribute__((packed)) Data {
  public:
    Imu imu;
    uint16_t distance_to_target;
    Cartesian2<float> position;
    Cartesian2<float> velocity;

    friend std::ostream& operator<<(std::ostream& os, const Data& data);
  };
}

#endif //TYPES_DATA_H
