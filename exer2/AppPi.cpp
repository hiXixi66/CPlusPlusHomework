#include <iostream>
#include <math.h>
using namespace std;

double pi(int n) {
    double pi=0;
    for (int i=0; i<n; i++) {
        pi=pi+pow(-1,i)/(2*i+1);
    }
    return pi;
}


int main() {

int n;
cin >> n;
double EstPi;
EstPi=4*pi(n);
cout<< EstPi<<endl;

return 0;
}