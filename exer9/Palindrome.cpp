#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

bool is_palinfrome(vector<int>& a, int start, int end){

    if (start >= end){
        return true;
    } else if (a[start] == a[end]) {
        // cout << a[start]<<','<<a[end]<<endl;
        return (is_palinfrome(a, start+1, end-1));}
    else if (a[start] != a[end]){
        return false;
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

    // copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(a));
        int val;
    while (true){
        cin >> val;
        if (cin.fail()){
            // display(a);
            if (is_palinfrome(a, 0, a.size()-1)){ cout<< "yes"<<endl;}
            else {cout<< "no"<<endl;}
            return 0;
            
        }
        else{
            a.push_back(val);
        }
        
    } 
            

 

}