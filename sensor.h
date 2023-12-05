//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_SENSOR_H
#define TYPES_SENSOR_H

#include <ostream>
#include <array>

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

    friend std::ostream& operator<<(std::ostream& os, const Imu& imu);
  };

  class Vfs {
  public:
    struct {
      uint8_t dx;
      uint8_t dy;
    } motion;
    uint8_t surface_quality;

    friend std::ostream& operator<<(std::ostream& os, const Vfs& vfs);
  };

  class TofCamera {
  public:
    std::array<std::array<uint8_t, 5>, 5> image;

    friend std::ostream& operator<<(std::ostream& os, const TofCamera& tof_camera);
  };

  class TofSpot {
  public:
    int distance;

    friend std::ostream& operator<<(std::ostream& os, const TofSpot& tof_spot);
  };

  class Sensor {
  public:
    Imu imu;
    Vfs vsf;
    TofCamera tof_cam;
    TofSpot tof_spot;

    friend std::ostream& operator<<(std::ostream& os, const Sensor& sensor);
  };
}

#endif //TYPES_SENSOR_H
