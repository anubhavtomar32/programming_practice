// A tea shop offers a loyalty program.Customers who buy more than 20 sets of dinner get a special "Gold badge", and those who buy 10 to 20 set get a "silver badge".Write a program to display the badgethey will recieve based on the no of sets they buy.

#include <iostream>
#include <string>
using namespace std;
int main (){
 
 int dinnerSet;

   cout << "Welcome Sir, how many sets have you purchases in this month : ";
   cin >> dinnerSet;

   if ( dinnerSet > 20 ){
       cout << "Congratulations Sir you are eligilable for our \"Gold badge\" ";

   } else if(dinnerSet>10){
    cout << "Congratulations Sir you are eligilable for our \"Silver badge\"";
   } else {
    cout << "Sorry, but you are not eligible for any badges: " << endl;
   }

    return 0;
}