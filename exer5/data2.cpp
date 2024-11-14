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
            vector<int>::iterator it_a = a.begin();
            vector<int>::iterator it_b = b.begin();
            for (; it_a != a.end() && it_b != b.end(); ++it_a, ++it_b) {
                    cout << *it_a << " " << *it_b << " ";
                }
            if (a.size()>b.size()){
                for (; it_a != a.end() ; ++it_a) {
                    cout << *it_a<<" ";
                }
            }
            else {
                for (; it_b != b.end() ; ++it_b) {
                    cout << *it_b<<" ";
                }
            }
           

            cout << endl;

            break;
        }
        if (input == 'a') {
            cin >> val;
            a.push_back(val);
            // sort(a.begin(), a.end());

        }
        if (input == 'b') {
            cin >> val;
            b.push_back(val);
            // sort(b.begin(), b.end());
        }
    }  
   
    
    return 0;
}
