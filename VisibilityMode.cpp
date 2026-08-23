#include <iostream>
using namespace std;

// Base class
class Employee
{

// int id; ----- this will be show an error because (int id) is in private(default)

public:
    int id;
    float salary;
    Employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
    Employee()
    {
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/method/etc.....
}
    NOTES:
    1. default visibility mode is private
    2. public visibility mode : public members of the base class becomes public member of the derived class
    3. private visibility mode : public members of the base class becomes private member of the derived class
    4. private members are never inherited
*/

// creating a programmer class derived from employee base class
class Programmer : Employee
{
public:
    Programmer(int inpID)
    {
        id = inpID;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee suraj(1), rohan(2);
    cout << suraj.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(1);
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}
