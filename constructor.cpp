#include<iostream>
using namespace std;

class complex{
    int a, b;
public:

    // creating a constructor
    // constructor is a special member function with the same name as of the class.
    // it is used to initialize the object of its class.
    // it is automatiacally invoked whenever an object is created.


    complex(void);   // counstructor declaration

    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;

    }
     
};
complex :: complex(void)  // this is a default constructor as it takes no parameters.
{
    a = 10;                // initializing the constructor
    b = 20;

}
int main(){
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}
