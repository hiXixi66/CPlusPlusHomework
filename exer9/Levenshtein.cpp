#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int levenshtein(const string& u, const string& v){
    int m = u.size();
    int n = v.size();

    if (n==0){
        return m;
    } else if (m==0) {
        return n;
    }
    else {
        string new_u = u;
        string new_v = v;
        char u1= u[0];
        char v1= v[0];
        new_u.erase(0,1);
        new_v.erase(0,1);
        int ind;
        if (u1==v1) {ind = 0;}
        else {ind =1;}
        return min(min(levenshtein(new_u,v)+1,levenshtein(u,new_v)+1),levenshtein(new_u,new_v)+ind);
    
}
}



int main() {
    string u, v;
    // cout << "Enter the first word: ";
    cin >> u;
    // cout << "Enter the second word: ";
    cin >> v;

    int distance = levenshtein(u, v);
    cout << distance <<endl;

    return 0;
}