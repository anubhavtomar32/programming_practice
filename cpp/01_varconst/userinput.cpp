#include <iostream>
#include <string>

using namespace std;

 int main(){
    
    string usersweets;
    int sweetQuantity;
    bool willDine;

    cout << "which sweet would you like to have?" << endl;
    getline(cin,usersweets);
    //asking how much the ser needs
    cout << "how much sweet would you like to have"<< endl;
    cin >> sweetQuantity;
    // asking if he will eat here or would like to get it packed
    cout << "would you dine here? \n would you like to get it packed";
    cin >> willDine;

    return 0;

 }