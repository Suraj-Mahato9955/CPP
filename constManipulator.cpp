#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //int a=34;
    //cout<<"the value of a is:"<<a;
    //a=54;
    //cout<<"the value of a is:"<<a;
    

    /****** Constant  in C++ ******/
    //const int a=76;
    //cout<<"the value of a is:"<<a<<endl;
    //a=98; //you will get an error because a is a constant they cannot change her value
    //cout<<"the value of a is:"<<a<<endl; 
   

    /***** Manipulators in C++ ******/
    int a=3,b=45,c=5432;
    cout<<"the value of a without setw is:"<<a<<endl;
    cout<<"the value of b without setw is:"<<b<<endl;
    cout<<"the value of c without setw is:"<<c<<endl;

    cout<<"the value of a is:"<<setw(6)<<a<<endl;
    cout<<"the value of b is:"<< setw(6)<<b<<endl;
    cout<<"the value of c is:"<<setw(6)<<c<<endl;


    return 0;



}
 
