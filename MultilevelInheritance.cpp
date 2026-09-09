#include <iostream>
using namespace std;

// Grandparent class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Parent class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

// Child class
class Puppy : public Dog {
public:
    void play() {
        cout << "Puppy is playing" << endl;
    }
};

int main() {
    Puppy p;

    p.eat();   // From Animal
    p.bark();  // From Dog
    p.play();  // From Puppy

    return 0;
}
