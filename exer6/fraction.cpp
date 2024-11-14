


#include "fraction.h"
#include <iostream>

using namespace std;


fraction::fraction(int n, int d) {
    this->numerator = n;
    this->denominator = d;
}

void fraction::add(fraction f) {
    this->numerator = this->numerator*f.denominator+f.numerator*this->denominator;
    this->denominator= this->denominator*f.denominator;
    return;
}

void fraction::mult(fraction f){
    this->numerator=this->numerator*f.numerator;
    this->denominator=this->denominator*f.denominator;
    return;
}

void fraction::div( fraction f){
    this->numerator=this->numerator*f.denominator;
    this->denominator=this->denominator*f.numerator;
    return;
}
void fraction::simplify(void) {
    int i=this->numerator;

    while(i!=1) {
   
        if (this->denominator%i==0 && this->numerator%i ==0){
           
            this->denominator=this->denominator/i;
            this->numerator=this->numerator/i;
            
        }
        i--;

    }
}

void fraction::display(void){
    cout << numerator << " / " << denominator << endl;
}