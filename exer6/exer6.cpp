#ifndef FRACTION_H_
#define FRACTION_H_

#include <string>

#include <iostream>

using namespace std;


class fraction {
private:
// Internal representation of a fraction as two integers
int numerator;
int denominator;

public:

fraction(int n, int d) {
    this->numerator = n;
    this->denominator = d;
};

void add(fraction f) {
    this->numerator = this->numerator*f.denominator+f.numerator*this->denominator;
    this->denominator= this->denominator*f.denominator;
    return;
}
void mult(fraction f){
    this->numerator=this->numerator*f.numerator;
    this->denominator=this->denominator*f.denominator;
    return;
}
void div(fraction f){
    this->numerator=this->numerator*f.denominator;
    this->denominator=this->denominator*f.numerator;
    return;
}
void simplify(void){
    int i=this->numerator;

    while(i!=1) {
   
        if (this->denominator%i==0 && this->numerator%i ==0){
           
            this->denominator=this->denominator/i;
            this->numerator=this->numerator/i;
            
        }
        i--;

    }
}
void display(void){
    cout << numerator << " / " << denominator << endl;
}
};

#endif






int main() {

    while (true) {
        int a, b, c, d;
        char op1, op2;
        string sign;

        cin >> a >> op1 >> b >> sign >> c >> op2 >> d;

        fraction f(a, b);
        fraction f1(c, d);

        if (cin.fail()) {

            break;
        }
        
        
        // if (sign=="q") {
            
        //     break;
        // }


        if (sign=="+") {
            f.add(f1);  
        }

        if (sign=="*") {
            f.mult(f1);  
        }

        if (sign=="div") {
            f.div(f1);  
        }

        f.simplify();
        f.display();

    }  
    return 0;
    
}