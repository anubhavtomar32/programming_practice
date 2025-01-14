// Q. Tea information display write a program that declares variables to store a type of tea,its price per kg and its rating.use datatypes effectively and print them in a formatted output using escape sequence.

 #include <iostream>
 #include <string>
using namespace std;
  int main(){
    string typeofTea = "Lemon Tea";
    float teaPrice = 110;
    char teaGrade =  'A';                                                

    cout << typeofTea << teaPrice<< teaGrade << endl;



    return 0;
  }


// Q. modify tea prices create a program where the user inputs a base price for tea. use type casting to increase the price by 10% and display the rounded price using elplicit casting.
 #include <iostream>
 #include <string>
 using namespace std;
 int main() {

  float userTea;
 cout << "what base price would you like to create?" << endl;
 cin>>userTea;
  //increasing the price by 10% 
  float Teaprice = userTea; 
  double finalPrice = userTea * Teaprice;
  cout << finalPrice << endl;

    return 0;

 }

// Q. Write a program that takes the users favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in fun message.

#include <iostream>
#include <string>
using namespace std;
int main(){

    string favouriteTea;
    string quantiyofTea;
    cout << "Which tea would you like to have today?"<<endl;
    cin >> "favouriteTea";
    cout<<"How many cups of tea would you like to have"<<endl;
    cin>>quantiyofTea;
    cout<<"Have a nice day."<<endl;

    return 0;
 
    } 