#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() {
            cout << "Base function " << endl;
        }
}; 

class Derived: public Base {
    public:
        void print() override;
};

void Derived::print() {
    cout << "Derived function " << endl;
}


// dynamic memory deallocation
class Shape {
    public:
        Shape() = default;

        virtual double get_area() const {
            return 0.0;
        }

        virtual ~Shape() = default; // deallocates memory using derived class' constructor
};

class Square: public Shape {
    private:
        double* length;
    
    public:
        Square(double len = 1.0): length(new double{len}){
        }

        double get_area() const override {
            return *length * *length;
        }

        ~Square() {
            delete length;
            cout << " deleted length" << endl << endl;
        }

};

int main() {
    // Derived derived1;

    // pointer of base Type that points to derived1
    // Base* base1 = &derived1;

    // calls member function of the derived class
    // base1->print();

    Square* shape1 =  new Square(1.5);
    cout << "Area of square: " << shape1->get_area() << endl;
    delete shape1; // invokes the square class destructor

    Shape* shape2 = new Square(2.5);
    cout << "area of square: " << shape2->get_area() << endl;
    delete shape2;

    return 0;
}