#include <iostream>
#include <set>
#include <string>

using namespace std;


int main() {
    multiset<int> bag;
    string command;
    while (cin>>command)
    {
        if (command =="add") {
            int x;
            cin >> x;
            bag.insert(x);

        }
        else if (command == "del") {
            int x;
            cin >> x;
            auto it = bag.find(x);
            while (it != bag.end()) {
                bag.erase(it); 
                it = bag.find(x);
            } 

        }
        else if (command == "qry") {
            int x;
            cin >> x;
            auto it = bag.find(x);
            if (it != bag.end()) {
                cout << "T";
            } else {
                cout << "F";
            }
            
        }
        else if (command == "quit") {
            break;

        }
    }
    


}