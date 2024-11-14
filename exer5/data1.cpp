#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> a;
    vector<int> b;

    while (true) {
        char input;
        int val;
        
        cin >> input;
        if (cin.fail()) {
            // for (auto e : a) {
            //     cout << e << " ";
            // }   
            // for (auto e : b) {
            //     cout << e << " ";
            
            // } 
            cout << "haha" << endl;

            break;
        }
        if (input == 'a') {
            cin >> val;
            a.push_back(val);
            sort(a.begin(), a.end());
            for (auto e : a) {
                cout << e << " ";
            }   
            for (auto e : b) {
                cout << e << " ";
            
            } 

        }
        if (input == 'b') {
            cin >> val;
            b.push_back(val);
            sort(b.begin(), b.end());
        }
    }  
   
    
    return 0;
}
