// It is the ability of objects to take on diff forms or behave in diff ways depending on context in which they are used
// Classical example : constructor overloading , jiska obj bnega vo constructor call hoga

/* 
- Types of polymorphism : 
    - Compile Time : Ex : constructor & function overloading , no of param or type diff , name remains same
    - Run Time / dynamic : Ex : function overriding , Virtual functions
*/

// Overloading : two functions in same class with same name 
// Overriding : Depends on inheritance , P & C contain same fun with diff implementation , P class function said to be overridden
// In overridding jiska obj bnega uska function execute hoga

/* 
- Virtual function :  It is a member function that you expect to be redefined in derived class
- Properties : 
    - Dynamic in nature
    - defined by virtual keyword inside base class , and declare in base class & overridden in child class
    - Always called during runtime
*/

// Example of Virtual function 

#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class
class Circle : public Shape {
public:
    // Overriding the virtual function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Another derived class
class Rectangle : public Shape {
public:
    // Overriding the virtual function
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    // Calling the virtual function
    shape1->draw(); // Output: Drawing a circle
    shape2->draw(); // Output: Drawing a rectangle

    // Cleaning up
    delete shape1;
    delete shape2;

    return 0;
}
