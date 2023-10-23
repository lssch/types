//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_PARAMETER_H
#define TYPES_PARAMETER_H

typedef enum _parameter_mpu_gyro_max_dps_e {
  MPU6050_GYRO_MAX_DPS_PM_250 = 250,
  MPU6050_GYRO_MAX_DPS_PM_500 = 500,
  MPU6050_GYRO_MAX_DPS_PM_1000 = 1000,
  MPU6050_GYRO_MAX_DPS_PM_2000 = 2000,
} __attribute__((packed)) mpu_setting_gyro_max_dps_e;

typedef enum _parameter_mpu_accel_max_g_e {
  MPU6050_ACCEL_MAX_G_PM_2 = 2,
  MPU6050_ACCEL_MAX_G_PM_4 = 4,
  MPU6050_ACCEL_MAX_G_PM_8 = 8,
  MPU6050_ACCEL_MAX_G_PM_16 = 16,
} __attribute__((packed)) mpu_setting_accel_max_g_e;

typedef struct _parameter_mpu_t {
  mpu_setting_gyro_max_dps_e gyro_max_dps;
  uint8_t gyro_samplerate_divisor;
  mpu_setting_accel_max_g_e accel_max_g;
  uint8_t gyro_calibration_samples;
} __attribute__((packed)) parameter_mpu_t;

typedef struct _rgb_t {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
} __attribute__((packed)) rgb_t;

typedef struct _parameter_vfs_neopixel_t {
  bool enable;
  rgb_t color;
  uint8_t brightness;
} __attribute__((packed)) parameter_vfs_neopixel_t;

typedef struct _parameter_vfs_t {
  parameter_vfs_neopixel_t neopixel;
} __attribute__((packed)) parameter_vfs_t;

typedef struct _parameter_car_t {
  uint8_t chassis_length;
  uint8_t chassis_width;
  uint8_t wheel_diameter;
} __attribute__((packed)) parameter_car_t;

typedef struct _parameter_servo_t {
  float zero_position;
  float max_steering_angle;
  float steering_limits;
} __attribute__((packed)) parameter_servo_t;

typedef struct _parameter_navlight_t {
  rgb_t color_blinker;
  rgb_t color_front;
  rgb_t color_back
} __attribute__((packed)) parameter_navlight_t;

typedef struct _parameter_t {
  parameter_car_t car;
  parameter_mpu_t mpu;
  parameter_vfs_t vfs;
  parameter_car_t servo;
  parameter_navlight_t navlight;
} __attribute__((packed)) parameter_t;

#endif //TYPES_PARAMETER_H
