#include<iostream>
using namespace std;

int main() {
    int n;
     cout<<"enter n\n";
     
    // print the first row
    for(int i = 1; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    // print the middle rows
    for(int i = 0; i < n - 2; i++) {
        cout << "* ";
        for(int j = 0; j < n - 2; j++) {
            cout << "  ";
        }
        cout << "* " << endl;
    }

    // print the last row
    for(int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    return 0;
}