//BREAK
//Write a program that keeps serving pastriesuntil the user says to stop.Use a break statement to exit the loop when the user types 'stop'.

#include <iostream>
#include <string>
 using namespace std;

 int main (){
        string response;

        while (true){
            
            cout<< "Do you want another cup of tea (Type 'stop' to exit)";
           cin>>response;

            if(response == "Stop"){
               
             break;   
            } 
            cout<< "Here is your tea\n";
            }
                cout<<"No more tea will be served to you"<<endl;
        
    return 0;
 }