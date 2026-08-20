#include<iostream>
using namespace std;

class complex{
    int a, b;
public:


    complex(int , int);   // counstructor declaration

    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;

    }
     
};
complex :: complex(int x , int y)  // this is a parametrized constructor as it takes no parameters.
{
    a = x;                // initializing the constructor
    b = y;

};
int main(){
    complex a(4 , 6);

    complex b(5 , 7);
    a.printnumber();
    b.printnumber();
    return 0;
}
