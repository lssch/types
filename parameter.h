//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_PARAMETER_H
#define TYPES_PARAMETER_H

#include <cstdint>

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

  class Imu {
  public:
    ImuGyproMaxDps gyro_max_dps;
    uint8_t gyro_samplerate_divisor;
    ImuAccelMaxG accel_max_g;
    uint8_t gyro_calibration_samples;
  };

  class Rgb {
  public:
    uint8_t red;
    uint8_t green;
    uint8_t blue;
  };

  class VfsNeopixel {
  public:
    bool enable;
    Rgb color;
    uint8_t brightness;
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
    Rgb color_blinker;
    Rgb color_front;
    Rgb color_back;
  };

  class Parameter {
  public:
    Car car;
    Imu imu;
    Vfs vfs;
    Servo servo;
    Navlight navlight;
  };
}

#endif //TYPES_PARAMETER_H
