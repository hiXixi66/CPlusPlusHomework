#include "shapes.h"
#include <iostream>
#include <cmath>
using namespace std;

Shape::Shape(double length) {

    this->length = length;

}

double Shape::height() const{
    return length;
}

void Shape::rotate() {
    return;
}





Rectangle::Rectangle (double length,double size):Shape(length){
    this->size = size;
}

double Rectangle::area() const{
    return this->size*height();

}


double Rectangle::width() const{
    return this->size;
}

double Rectangle::perimeter() const{
    return 2*(this->size+height());
}



void Rectangle::rotate() {
    double a;
    a = this->length;
    this->length = this->size;
    this->size = a;
    return;
}



Square::Square (double length):Shape(length){
    
}

double Square::area() const{
    return height()*height();

}

double Square::perimeter() const{
    return 4*height();
}

// void Square::rotate(){
//     return;
// }

double Square::width() const{
    return this->length;
}




Circle::Circle (double length):Shape(length){
    this->length=length*2;
    
}

double Circle::area() const{
    
    return 0.25*M_PI*height()*height();
}


double Circle::perimeter() const{
    return M_PI*height();
}

double Circle::width() const{
    return this->length;
}

// void Circle::rotate(){
//     return;
// }