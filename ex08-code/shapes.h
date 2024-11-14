#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {

protected:
    double length;

public:

    Shape(double length);
    double height() const;
    virtual double width() const = 0;
    virtual double area() const=0;
    virtual double perimeter() const=0;
    void rotate();

};


class Rectangle: public Shape{

private:
    double size;


public:

    Rectangle(double length, double size);
    double area() const;
    double width() const;
    double perimeter() const;
    void rotate();

};



class Square: public Shape {


public:
    Square(double length);
    double area() const;
    double perimeter() const;
    // void rotate();
    double width() const;
};



class Circle: public Shape {



public:
    Circle(double length);
    double area() const;
    double perimeter() const;
    double width() const;
    // void rotate();

};

#endif
