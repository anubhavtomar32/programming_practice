//write a program that allows a user to input the number of tea bags they have . assign additional bags to them on certain conditions (e.g. if they have less than 10 then give them 5 extra)Update the original number using assignment operator.

#include <iostream>
#include <string>
using namespace std;
int main (){
    int teaBags;
    
    cout << "enter the amount of tea bags that you currently have :" << endl;
    cin >> teaBags;

    if (teaBags <= 10){
        teaBags+=5;

     }  
        cout << "your total tea bags are : " << teaBags << endl;
    
    
    return 0;

}
