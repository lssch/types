//
// Created by Lars Schwarz on 17.08.23.
//

#ifndef TYPES_SENSOR_H
#define TYPES_SENSOR_H

typedef struct _cartesian_t {
  float x;
  float y;
  float z;
} __attribute__((packed)) cartesian_t;

typedef struct _sensor_imu_t {
  float temperature;
  cartesian_t accelerometer;
  cartesian_t gyroscope;
} __attribute__((packed)) sensor_imu_t;

typedef struct _sensor_vfs_t {
  struct {
    uint8_t dx;
    uint8_t dy;
  }__attribute__((packed)) motion;
  uint8_t surface_quality;
} __attribute__((packed)) sensor_vfs_t;

typedef struct _sensor_tof_cam_t {
  uint8_t pixel[100][100];
} __attribute__((packed)) sensor_tof_cam_t;

typedef struct _sensor_tof_spot_t {
  float distance;
} __attribute__((packed)) sensor_tof_spot_t;

typedef struct _sensor_t {
  sensor_imu_t imu;
  sensor_vfs_t vsf;
  sensor_tof_cam_t tof_cam;
  sensor_tof_spot_t tof_spot;
} __attribute__((packed)) sensor_t;

#endif //TYPES_SENSOR_H
