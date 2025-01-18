//DO WHILE LOOP
//Write a program that asks the user if they want more tea.Keep askng them until they say no(case insensitive),using a do while loop.
#include <iostream>
#include <string>
 using namespace std;
 int main(){
string tea;
       
       
        
      do{
         cout<< "Would you like to have more tea? (yes/no)";
         cin>> tea;

      } while (tea != "no" || tea != "No");
        


    return 0;
 }