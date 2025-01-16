//Write a program that lets the user select a dish from a menu.use a switch statement to display the price of the dish the user selected.
//*Paneer=3$
//chole Bhature=5$
//pizza=4$
#include <iostream>
using namespace std;
int main(){

int choice;
double price;
 cout << "Here is your menu sir\n";
 cout << "1.Paneer.\n" ;
 cout << "2.Chole Bhature.\n" ;
 cout << "3.Pizza\n" ;
 cout << "Please choose a dish.\n";
 cin>>choice;

   switch(choice){
    case 1:
            price = 3.0;
            cout << "You have selected Paneer. price : "<< price <<endl;   
            break;
    case 2:
            price = 5.0;
            cout << "You have selected Chole Bhature. price : "<< price <<endl; 
            break;
     case 3:
            price = 4.0;
            cout << "You have selected Pizza. price : "<< price <<endl;
            break;   
    default:
            cout << "Invalid Choiced"<<endl;
            break;
               }


    return 0;

}