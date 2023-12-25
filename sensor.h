//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_SENSOR_H
#define TYPES_SENSOR_H

#include "types/Cartesian.h"
#include <ostream>
#include <array>
#include <cstdint>

namespace Sensor {
  class __attribute__((packed)) Imu {
  public:
    float temperature;
    Cartesian3<float> accelerometer;
    Cartesian3<float> gyroscope;

    friend std::ostream& operator<<(std::ostream& os, const Imu& imu);
  };

  class __attribute__((packed)) Vfs {
  public:
    Cartesian2<float> motion;
    uint8_t surface_quality;

    friend std::ostream& operator<<(std::ostream& os, const Vfs& vfs);
  };

  class __attribute__((packed)) TofCamera {
  public:
    std::array<std::array<uint8_t, 1>, 1> pixels;

    friend std::ostream& operator<<(std::ostream& os, const TofCamera& tof_camera);
  };

  class __attribute__((packed)) TofSpot {
  public:
    uint16_t distance;

    friend std::ostream& operator<<(std::ostream& os, const TofSpot& tof_spot);
  };

  class __attribute__((packed)) Sensor {
  public:
    Imu imu;
    Vfs vfs;
    TofCamera tof_cam;
    TofSpot tof_spot;

    friend std::ostream& operator<<(std::ostream& os, const Sensor& sensor);
  };
}

#endif //TYPES_SENSOR_H
