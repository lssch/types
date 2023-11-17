//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_PARAMETER_H
#define TYPES_PARAMETER_H

namespace Parameter {
  enum class ParameterMpuGyproMaxDps : uint16_t {
    MPU6050_GYRO_MAX_DPS_PM_250 = 250,
    MPU6050_GYRO_MAX_DPS_PM_500 = 500,
    MPU6050_GYRO_MAX_DPS_PM_1000 = 1000,
    MPU6050_GYRO_MAX_DPS_PM_2000 = 2000,
  };

  enum class ParameterMpuAccelMaxG : uint8_t {
    MPU6050_ACCEL_MAX_G_PM_2 = 2,
    MPU6050_ACCEL_MAX_G_PM_4 = 4,
    MPU6050_ACCEL_MAX_G_PM_8 = 8,
    MPU6050_ACCEL_MAX_G_PM_16 = 16,
  };

  class __attribute__ ((__packed__)) Mpu {
  public:
    ParameterMpuGyproMaxDps gyro_max_dps;
    uint8_t gyro_samplerate_divisor;
    ParameterMpuAccelMaxG accel_max_g;
    uint8_t gyro_calibration_samples;
  };

  class __attribute__ ((__packed__)) Rgb {
  public:
    uint8_t red;
    uint8_t green;
    uint8_t blue;
  };

  class __attribute__ ((__packed__)) VfsNeopixel {
  public:
    bool enable;
    Rgb color;
    uint8_t brightness;
  };

  class __attribute__ ((__packed__)) Vfs {
  public:
    VfsNeopixel neopixel;
  };

  class __attribute__ ((__packed__)) Car {
  public:
    uint8_t chassis_length;
    uint8_t chassis_width;
    uint8_t wheel_diameter;
  };

  class __attribute__ ((__packed__)) Servo {
  public:
    // All data in centi deg
    int16_t zero_position;
    int16_t max_steering_angle;
    int16_t steering_limits;
  };

  class __attribute__ ((__packed__)) Navlight {
  public:
    Rgb color_blinker;
    Rgb color_front;
    Rgb color_back;
  };

  class __attribute__ ((__packed__)) Parameter {
  public:
    Car car;
    Mpu mpu;
    Vfs vfs;
    Servo servo;
    Navlight navlight;
  };
}

#endif //TYPES_PARAMETER_H
