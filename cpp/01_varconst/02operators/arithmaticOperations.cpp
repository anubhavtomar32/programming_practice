//Create a program that calculates the total price of tea cups. the user inputs the no of cups they want and price per cup. the program should calculatethe total price and apply a 5% discount if the total exceeds a certain amount and show a final price. 

#include <iostream>
#include <string>
using namespace std;
int main(){ 
 int cups;
 double Teaprice, totalTeaprice, discountedTeaprice;
 cout << "how many cups of tea would you like to buy?" << endl;
 cin >> cups;
 cout << "what should be the price of the tea?" << endl;
 cin >> Teaprice;
 
 totalTeaprice = cups * Teaprice;
 
 // now we have to apply 5% discount id the total price exceeds 500

 if (totalTeaprice > 500) {
     discountedTeaprice = totalTeaprice - (totalTeaprice * 0.05);
  cout << "your discounted tea price is: " << discountedTeaprice << endl;
 
 } else {

    cout << "your TotalTeaprice is: " << totalTeaprice << endl;
 }
    return 0;
}