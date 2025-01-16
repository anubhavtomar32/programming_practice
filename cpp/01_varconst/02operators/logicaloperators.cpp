//Write a programthat checks if a user is eligible for prime subscription discount.The discount applies if a user is a student or have made 15 orders.Ask the user to input their status with (student or not) with their cup count.

#include <iostream>

using namespace std;
int main(){
  int numberOfOrders;
  bool isStudent;
  
  cout<< "Enter the number of orders you have made : ";
  cin >> numberOfOrders;
  cout<< "Are you a student(press 1 for yes and 0 for no)";
  cin>>isStudent;

   if (numberOfOrders>=15 || isStudent){
     cout<<"Congratulation you are eligible for a \"Prime\" Subscription"<< endl;

   } else {
    cout << "Unfortunately you are not eligible for the subscription"<< endl;
   }


    return 0;
}