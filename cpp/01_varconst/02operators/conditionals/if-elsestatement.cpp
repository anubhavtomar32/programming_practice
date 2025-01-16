//Wrute a program that checks if the bakery is open.If the current hour(input by the user)is between 8am to 6pm,the shop is open othwerwise the shop is closed.

#include <iostream>
#include <string>
using namespace std;
 int main (){
  int hour;
  cout <<"At which time are you planning to visit the bakery sir";
  cin >> hour;

  if(hour >= 8 && hour<=18){
  cout << "You're welcome to visit sir.";
  } else{
    cout << "Sorry,but we are closed right now." << endl;
  }

    return 0;
 }