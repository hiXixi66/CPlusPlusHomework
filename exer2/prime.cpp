#include <iostream>

using namespace std;
int division(int n) {
    int i=2;
    while (n%i!=0)
    {
        i++;
    }
    return i;
    
}


int main() {

int n;
cin >> n;
int k;
while (n!=1) {
    k=division(n);
    n=n/k;
    if (n!=1) {
        cout<< k << " * ";
    }
    else {
        cout<<k<<endl;
    }
    
    
}
return 0;
}