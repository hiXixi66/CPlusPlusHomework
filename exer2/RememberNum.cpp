#include <iostream>

using namespace std;

#define N 1000

int main() {

int a[N];
for(int i=0; i<N;i++) {
    a[i]=-1;
}
int ind;

cin >> ind;
while (ind) {
    a[ind-1]++;
    cout<< a[ind-1]<<endl;
    
    cin >>ind;
}
return 0;
}