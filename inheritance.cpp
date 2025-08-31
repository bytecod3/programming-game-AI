#include <iostream>
using namespace std;

class Animal {

    private:
        string color;

    protected:
        string type;

    public:
        void eat() {
            cout<< "I can eat" << endl;
        }

        void sleep() {
            cout << "I am asleep" << endl;
        }

        void setColor(string clr) {
            color = clr;
        }

        string getColor() {
            return color;
        }

};

// derived class 
class Dog: public Animal {
    
    public:
        void setType(string tp) {
            type = tp;
        }

        void displayInfo(string c) {
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }

        void bark() {
            cout << "I can bark " << endl;
        }
};

// virtual functions 
class Base {
    public:
        virtual void print() {
            // code 
        }
};

class Derived: public Base {
    public:
        void print() {
            // code 
        }
};

int main() {
    // Dog dog1; 
    // dog1.setType("Mammal");
    // dog1.setColor("Grey");


    // dog1.eat();
    // dog1.sleep();
    // dog1.bark();
    // dog1.displayInfo(dog1.getColor());

    Derived derived1;
    Base* base1 = &derived1;

    // calls the print function of Base class 
    base1->print();

    return 0;

}