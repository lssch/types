//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_PARAMETER_H
#define TYPES_PARAMETER_H

#include "types/Cartesian.h"
#include "types/Color.h"

namespace Parameter {
  enum class ImuGyproMaxDps : uint16_t {
    PM_250_DPS = 250,
    PM_500_DPS = 500,
    PM_1000_DPS = 1000,
    PM_2000_DPS = 2000,
  };

  enum class ImuAccelMaxG : uint8_t {
    PM_2G = 2,
    PM_4G = 4,
    PM_8G = 8,
    PM_16G = 16,
  };

  class __attribute__((packed)) Imu  {
  public:
    ImuGyproMaxDps gyro_max_dps;
    uint8_t gyro_samplerate_divisor;
    ImuAccelMaxG accel_max_g;
    uint8_t gyro_calibration_samples;
  };

  class VfsNeopixel {
  public:
    uint8_t enable;
    RGBA color;
  };

  class Vfs {
  public:
    VfsNeopixel neopixel;
  };

  class Car {
  public:
    uint16_t chassis_length;
    uint8_t chassis_width;
    uint8_t wheel_diameter;
  };

  class Servo {
  public:
    // All data in centi deg
    int16_t zero_position;
    int16_t max_steering_angle;
    int16_t steering_limits;
  };

  class Navlight {
  public:
    RGB color_blinker;
    RGB color_front;
    RGB color_back;
  };

  class Odometry {
  public:
    Cartesian3<int8_t> imu_link;
    Cartesian3<int8_t> tof_spot_link;
    Cartesian3<int8_t> tof_cam_link;
    Cartesian3<int8_t> vfs_link;
  };

  class Parameter {
  public:
    Car car;
    Imu imu;
    Vfs vfs;
    Servo servo;
    Navlight navlight;
    Odometry odometry;
  };
}

#endif //TYPES_PARAMETER_H