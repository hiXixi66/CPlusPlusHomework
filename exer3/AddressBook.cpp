#include <iostream>
#include <string>
#include <set>
#define MAX_SIZE 50
using namespace std;
struct address {
    int Page;
    string FirstName;
    string MiddleName;
    string LastName;
    
    int PhoneNumber;
    string StreetAddress;
    int HouseNumber;
    int ZIPCode;
    string Region;
};

void add(address AddressBook[], int n) {
    AddressBook[n].Page=n;
    cin>>AddressBook[n].FirstName;
    cin>>AddressBook[n].MiddleName;
    cin>>AddressBook[n].LastName;
    cin >> AddressBook[n].PhoneNumber; 
    cin >> AddressBook[n].StreetAddress;
    cin >> AddressBook[n].HouseNumber;
    cin >> AddressBook[n].ZIPCode;
    cin >> AddressBook[n].Region;
    // cout <<"ok" <<endl;

}
void show(address AddressBook[], int n) {
    cout << AddressBook[n].FirstName <<","<<AddressBook[n].MiddleName
    <<","<< AddressBook[n].LastName
    <<","<< AddressBook[n].PhoneNumber
    <<","<<  AddressBook[n].StreetAddress
    <<","<<  AddressBook[n].HouseNumber
    <<","<<  AddressBook[n].ZIPCode
    <<","<<  AddressBook[n].Region <<endl;

}

int main() {
    multiset<int> Pages;
    string command;
    address AddressBook[MAX_SIZE]={};
    while (cin >> command) {

        if (command=="add") {
            // cout <<"ok" <<endl;
            int x;
            cin >> x;
            if (x > 0 && x < MAX_SIZE) {
                auto it = Pages.find(x);
                if (it == Pages.end()) {
                    Pages.insert(x);
                    add(AddressBook,x);
                }
            }

        }
        else if (command=="qry") {
            // cout <<"okqry" <<endl;
            int x;
            cin >> x;
            if (x > 0 && x < MAX_SIZE) {
                auto it = Pages.find(x);
                if (it != Pages.end()) {
                    // cout <<"find" <<endl;
                    show(AddressBook,x);
                }
            }

        }

        else if (command=="clr") {
            int x;
            cin >> x;
            if (x > 0 && x < MAX_SIZE) {
                auto it = Pages.find(x);
                if (it != Pages.end()) {
                    AddressBook[x] = {}; 
                    Pages.erase(it); 
                }
            }

        }
        else if (command=="quit") {
            break;
        }
    }
}


