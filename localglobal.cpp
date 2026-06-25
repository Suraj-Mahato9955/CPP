#include<iostream>
using namespace std;

int glo=6;
void sum(){
    int a;
    cout<< glo;

}

int main() {
    int glo=9;
    glo=78;
    //int a=56;
    //int b=34;
    //float pi=3.24;
    //char c='d';
    bool is_true = true;

    sum();
    cout<<glo<< is_true;
    
    //cout<<"here the value of a is"<<a<<". \nthe value of b is"<< b;

    //cout<<"\nthe value of pi is: "<<pi;
    //cout<<"\nthe value of c is: "<<c;
    return 0;
}
