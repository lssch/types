//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_SENSOR_H
#define TYPES_SENSOR_H

namespace Sensor {
  class __attribute__ ((__packed__)) Cartesian {
  public:
    float x;
    float y;
    float z;
  };

  class __attribute__ ((__packed__)) Imu {
  public:
    float temperature;
    Cartesian accelerometer;
    Cartesian gyroscope;
  };

  class __attribute__ ((__packed__)) Vfs {
  public:
    struct {
      uint8_t dx;
      uint8_t dy;
    }__attribute__((packed)) motion;
    uint8_t surface_quality;
  };

  class __attribute__ ((__packed__)) TofCamera {
  public:
    uint8_t pixel[5][5];
  };

  class __attribute__ ((__packed__)) TofSpot {
  public:
    float distance;
  };

  class __attribute__ ((__packed__)) Sensor {
  public:
    Imu imu;
    Vfs vsf;
    TofCamera tof_cam;
    TofSpot tof_spot;
  };
}

#endif //TYPES_SENSOR_H
