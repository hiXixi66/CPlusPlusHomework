#include "vector2d.h"
#include <cmath>
using namespace std;

template<class T>
v2d<T>::v2d(T a, T b) {
    // Write your code here
    this->x = a;
    this->y = b;
    return;
}

template<class T>
v2d<T>::v2d(const v2d & v) {
    // Write your code here
    this->x = v.x;
    this->y = v.y;
    return;
}

template<class T>
v2d<T>::~v2d() {
    // Write your code here
}

template<class T>
v2d<T> & v2d<T>::operator=(const v2d &v) {
    // Write your code here
    this->x = v.x;
    this->y = v.y;
    return *this;

}

template<class T>
v2d<T> & v2d<T>::operator+(const v2d &v) {
    // Write your code here
    this->x = this->x + v.x;
    this->y = this->y + v.y;
    return *this;
  
}

template<class T>
T v2d<T>::operator*(const v2d &v) {
    // Write your code here
    T sum;
    sum = this->x * v.x + this->y * v.y;
    return sum;
}

template<class T>
v2d<T> & v2d<T>::operator*(T k) {
    // Write your code here
    this->x = this->x * k;
    this->y = this->y * k;
    return *this;
}

template<class T>
T v2d<T>::length() {
    // Write your code here
    T len;
    len = sqrt(this->x * this->x + this->y * this->y);
    return len;
}

