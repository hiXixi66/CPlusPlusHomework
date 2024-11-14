#include <iostream>
#include <string>
using namespace std;

int main()
{
    string op;
    int n;
    cin >> n;
    float sum;
    sum=0;
    int i;
    for (i=0;i<n;i++) {
        float a;
        cin >> a;
        sum=sum +a;
        }
    
    cout << sum << endl;
    
    return 0;
    
}