//
// Created by Lars Schwarz on 07.12.2023.
//

#ifndef CARTESIAN_H
#define CARTESIAN_H

template<typename T> class Cartesian2 {
public:
  // Scalar operations
  Cartesian2<T>& operator+=(const T& rhs);
  Cartesian2<T>& operator-=(const T& rhs);
  Cartesian2<T>& operator*=(const T& rhs);
  Cartesian2<T>& operator/=(const T& rhs);
  // Vector operations
  Cartesian2<T>& operator+=(const Cartesian2<T>& rhs);
  Cartesian2<T>& operator-=(const Cartesian2<T>& rhs);
  Cartesian2<T>& operator*=(const Cartesian2<T>& rhs);
  Cartesian2<T>& operator/=(const Cartesian2<T>& rhs);

  T x;
  T y;
};

template<typename T>
Cartesian2<T> &Cartesian2<T>::operator+=(const T &rhs) {
  return {x+rhs, y+rhs};
}

template<typename T>
Cartesian2<T> &Cartesian2<T>::operator-=(const T &rhs) {
  return {x-rhs, y-rhs};
}

template<typename T>
Cartesian2<T> &Cartesian2<T>::operator*=(const T &rhs) {
  return {x*rhs, y*rhs};
}

template<typename T>
Cartesian2<T> &Cartesian2<T>::operator/=(const T &rhs) {
  return {x/rhs, y/rhs};
}

template<typename T>
Cartesian2<T> &Cartesian2<T>::operator+=(const Cartesian2<T> &rhs) {
  return {x+rhs.x, y+rhs.y};
}

template<typename T>
Cartesian2<T> &Cartesian2<T>::operator-=(const Cartesian2<T> &rhs) {
  return {x-rhs.x, y-rhs.y};
}

template<typename T>
Cartesian2<T> &Cartesian2<T>::operator*=(const Cartesian2<T> &rhs) {
  return {x*rhs.x, y*rhs.y};
}

template<typename T>
Cartesian2<T> &Cartesian2<T>::operator/=(const Cartesian2<T> &rhs) {
  return {x/rhs.x, y/rhs.y};
}

template<typename T> class Cartesian3 {
public:
  // Scalar operations
  Cartesian3<T>& operator+=(const T& rhs);
  Cartesian3<T>& operator-=(const T& rhs);
  Cartesian3<T>& operator*=(const T& rhs);
  Cartesian3<T>& operator/=(const T& rhs);
  // Vector operations
  Cartesian3<T>& operator+=(const Cartesian3<T>& rhs);
  Cartesian3<T>& operator-=(const Cartesian3<T>& rhs);
  Cartesian3<T>& operator*=(const Cartesian3<T>& rhs);
  Cartesian3<T>& operator/=(const Cartesian3<T>& rhs);

  T x;
  T y;
  T z;
};

template<typename T>
Cartesian3<T> &Cartesian3<T>::operator+=(const T &rhs) {
  return {x+rhs, y+rhs, z+rhs};
}

template<typename T>
Cartesian3<T> &Cartesian3<T>::operator-=(const T &rhs) {
  return {x-rhs, y-rhs, z-rhs};
}

template<typename T>
Cartesian3<T> &Cartesian3<T>::operator*=(const T &rhs) {
  return {x*rhs, y*rhs, z*rhs};
}

template<typename T>
Cartesian3<T> &Cartesian3<T>::operator/=(const T &rhs) {
  return {x/rhs, y/rhs, z/rhs};
}

template<typename T>
Cartesian3<T> &Cartesian3<T>::operator+=(const Cartesian3<T> &rhs) {
  return {x+rhs.x, y+rhs.y, z+rhs.z};
}

template<typename T>
Cartesian3<T> &Cartesian3<T>::operator-=(const Cartesian3<T> &rhs) {
  return {x-rhs.x, y-rhs.y, z-rhs.z};
}

template<typename T>
Cartesian3<T> &Cartesian3<T>::operator*=(const Cartesian3<T> &rhs) {
  return {x*rhs.x, y*rhs.y, z*rhs.z};
}

template<typename T>
Cartesian3<T> &Cartesian3<T>::operator/=(const Cartesian3<T> &rhs) {
  return {x/rhs.x, y/rhs.y, z/rhs.z};
}

#endif //CARTESIAN_H