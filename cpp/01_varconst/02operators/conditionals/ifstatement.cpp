//Write a program thaat chekcs if the user wants to order green tea.If the user types "green tea" it should confirm their order.

#include<iostream>
#include <string>
using namespace std;
int main(){
 string teaOrder; 
cout << "what tea would you like to order?";
cin >> teaOrder;
if(teaOrder == "Green Tea"){
    cout << "Your order for green tea is confirmed" << endl;

}
    return 0;
}
