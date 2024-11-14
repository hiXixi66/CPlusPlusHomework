#include <iostream>
#include <string>
using namespace std;

int main()
{
    string op;
    int a,b;
    cin >> a;
    cin >> b;
    if (a>b) {
        cout << a << " is bigger than " << b << endl;
        }
    else if (a==b) {
        cout << a << " is equal to " << b << endl;
        }
    else {
        cout << a << " is smaller than " << b << endl;
        }
    return 0;
    
}