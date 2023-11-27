//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_SENSOR_H
#define TYPES_SENSOR_H

namespace Sensor {
  class Cartesian {
  public:
    float x;
    float y;
    float z;
  };

  class Imu {
  public:
    float temperature;
    Cartesian accelerometer;
    Cartesian gyroscope;
  };

  class Vfs {
  public:
    struct {
      uint8_t dx;
      uint8_t dy;
    } motion;
    uint8_t surface_quality;
  };

  class TofCamera {
  public:
    uint8_t pixel[5][5];
  };

  class TofSpot {
  public:
    float distance;
  };

  class Sensor {
  public:
    Imu imu;
    Vfs vsf;
    TofCamera tof_cam;
    TofSpot tof_spot;
  };
}

#endif //TYPES_SENSOR_H
