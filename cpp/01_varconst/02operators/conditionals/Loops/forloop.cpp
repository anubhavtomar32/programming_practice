//FOR LOOP
//Create a program that prints the brewing instructions for makinf 5 bowl of poha.The brewing process should be once for each bowl using a for loop.

#include <iostream>
#include <string>
 using namespace std;
 int main(){
 int pohaBowl= 5;

        for( int i = 1; i <= pohaBowl; i++){
            cout<<"Brewing cup "<< i<< "of tea .."<< endl;
        }
            cout<<"Outside of loop"<< endl;
    return 0;
 }