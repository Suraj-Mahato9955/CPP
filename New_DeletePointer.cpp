#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"the value of a is"<<(*ptr)<<endl;

    // New Keyword
    // int* p = new int(5);
    float* p = new float(40.5);
    cout<<"the value of address p is"<<*(p)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 30;   //*(arr+1) = 30;
    arr[2] = 20;
    delete[] arr;   // now arr will be free and now the array store random values
    cout<<"the value of arr[0] is"<<arr[0]<<endl;
    cout<<"the value of arr[2] is"<<arr[2]<<endl;
    cout<<"the value of arr[3] is"<<arr[3]<<endl;

    

}
