//#include<iostream>
//using namespace std;
 //int main(){


 /******** if else ladder **********/

    //int age,;
    //cout<<"enter your age"<<age<<endl;
    //cin>>age;
    //if(age<18){
        //cout<<"you are not eligible to vote"<<endl;

    //}
    //else if(age==18){

        //cout<<"you are eligible to vote"<<endl;

    //}
    //else{
        //cout<<"you are adult and eligible to vote"<<endl;
    //}
 //}

 
 /*************switch statement  **********/

 #include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid day!";
    }

    return 0;
}
