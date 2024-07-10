// Object : Entities in real world
// Class : Blueprint of these entities

/* 
- Ex : Toyata = class
Fortuner - Object
Rest - object
*/

/* Access Modifiers
- private : data & method accessable inside class
- public : to everyone it is accessible 
- protected : accessable inside class & to its derived class
*/

/* 
- Pillars of OOP
    Encapsulation
    Inheritance
    Polymorphism
    Abstraction
*/

/* 
- setter : use to set the value of private members
- getter : helps to retrive the private member value
*/

// Syntax : 

class Teacher{
    
    // Access modifier : 
    public :
    // properties or attributes
    string name;
    string dept;
    string subject;
    double salary;
    
    // methods or member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }
};


int main() {
    
    // Object creation
    Teacher t1;
    t1.name = "Diptesh";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.salary = 25000;
    
    t1.changeDept("Comp");
    cout << t1.name;
    cout << t1.dept;

    return 0;
}
