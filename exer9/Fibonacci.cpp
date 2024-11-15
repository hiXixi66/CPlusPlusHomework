#include <iostream>
#include <vector>

using namespace std;

int fibonacci(unsigned int a) {
    if (a==0) {return 1;}
    else if (a==1) {return 1;}
    else {return (fibonacci(a-1)+fibonacci(a-2));}
}

void display(vector<int>& a){
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}


int main() {
    vector<unsigned int> a;
    vector<int> b;
    int val;
    while (true){
        cin >> val;
        if (cin.fail()){
            
        // if (val == 5){
            for (int i = 0; i < a.size(); i++){
                b.push_back(fibonacci(a[i]));
            }
            display(b);
            return 0;
        }
        else{
            a.push_back(val);
        }
        
    }       

}