#include <iostream>
 using namespace std;
 int main(){
 float teaPrice = 45.98;
 int roundedTeaPrice = (int) teaPrice;
  // here we will not get the desired result beacuse we have used int datatype so it will ignore the decimal values
   cout << roundedTeaPrice << endl;
   int teaQuantity = 5;
    double totalTeaPrice = teaQuantity * teaPrice;
    cout << totalTeaPrice << endl;
    // here we got the desired result because we used double datatype which  also considers decimal values
    return 0;
 }