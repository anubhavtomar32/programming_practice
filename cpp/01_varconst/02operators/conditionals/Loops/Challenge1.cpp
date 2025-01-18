// WHILE LOOP
//. Write a program that keep tracks of tea orders.Each time a cup of tea is made,decrease the number of cup remaining.The loop should run until all cups are served.

#include <iostream>

using namespace std;

int main (){
 int teaCups;
    cout<<"Enter the number of cups to be served.: ";
    cin>>teaCups;

    while(teaCups > 0){
        teaCups--;
        cout<<"Here is your tea order \n "<<teaCups<< "reamaining teacups" <<endl;
    }
        cout<<"All teacups are served."<<endl;

    return 0;
}