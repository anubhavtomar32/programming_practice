//A tea shop offers discounts based on the number os tea cups ordered.Write a program that checks the numbers of cup ordered and applies a discount.
//*More than 20 cups = 20% discount 
//between 10 to 20 cups = 10% discount
// less than 10 cups = no discount

#include<iostream>
using namespace std;
int main (){
 int teaCups;

 cout<<"Enter the amount of cups you want to order.";
 cin>> teaCups;

 if (teaCups>20){
  cout<<"Congratulations you're eligible for 20% discount";

 } else if (teaCups>10 && teaCups<=20){
    cout<<"Congratulations you' eligible for 10% discount"<<endl;

 } else{
    cout<<"Here is your order sir"<<endl;
 }
    return 0;
}