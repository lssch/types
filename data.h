//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_DATA_H
#define TYPES_DATA_H

namespace Data {
  class Imu {
  public:
    Sensor::Cartesian gyro_calibration_values;
  };

  class Data {
  public:
    Imu imu;
    uint8_t velocity;
  };
}

#endif //TYPES_DATA_H
