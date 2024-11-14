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
            int sum=0;
            for (; it_a != a.end() && it_b != b.end(); ++it_a, ++it_b) {
                
                sum=sum+*it_a*(*it_b);
            }
           

            cout << sum << endl;

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
