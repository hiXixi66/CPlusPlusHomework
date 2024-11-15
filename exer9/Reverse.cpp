#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& a, int start, int end){

    if (start >= end){
        return;
    }
    else {
        int c;
        c = a[start];
        a[start] = a[end];
        a[end] = c;
        // cout<< "end"<< end <<endl;
        // vector<int> a1 (a.begin()+1, a.end()-1);
        reverse(a, start+1, end-1);

    }
}

void display(vector<int>& a){
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}


int main() {
    vector<int> a;
    vector<int> b;
    int val;
    while (true){
        cin >> val;
        if (cin.fail()){
            
        // if (val == 5){
            reverse(a, 0, a.size()-1);
            display(a);
            return 0;
        }
        else{
            a.push_back(val);
        }
        
    }       

}