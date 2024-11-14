#ifndef __v2d__
#define __v2d__

template<class T>
class v2d {

public:
    // Standard constructor: builds a vector (a,b)
    v2d(T, T);

    // Copy constructor: builds a vector that is exactly as v
    v2d(const v2d<T> & v);

    // Destructor
    ~v2d(void);

    // Assignment operator: updates the vector to make it as v
    v2d<T> & operator=(const v2d<T> &v);

    // Vector addition: updates the vector by adding v
    v2d<T> & operator+(const v2d<T> &v);

    // Scalar multiplication: updates the vector by scaling by k
    v2d<T> & operator*(T);

    // Scalar product of the current vector by another vector v 
    T operator*(const v2d<T> &v);

    // Returns the length of a vector
    T length(void);

private:
    // Internal representation of a vector with just two doubles x and y
    T x;
    T y;

};

#include "vector2d.hpp"

#endif

