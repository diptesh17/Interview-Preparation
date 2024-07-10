/*  
    Types of Constructor
    - Non parameterized
    - parameterized 
    - default
 */

// Constructor have same names but differs in args = Constructor Overloading ( Polymorphism )

// This keyword : special ptr in c++ that points to curr object
// this->prop & *(this).prop are same

// Copy constructor : used to copy prop of one object into another

#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    string dept;
    string subject;
    double salary;

public:
    // Parameterized constructor
    Teacher(string tName, string tDept, string tSubject, double tSalary) {
        name = tName;
        dept = tDept;
        subject = tSubject;
        salary = tSalary;
    }

  

    // Getter methods
    string getName() {
        return name;
    }

    string getDept() {
        return dept;
    }

    string getSubject() {
        return subject;
    }

    double getSalary() {
        return salary;
    }

    // Methods or member function
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    // Object creation with parameterized constructor
    Teacher t1("Diptesh", "CSE", "C++", 25000);
    
    // Default copy constructor invoked hoga 
    Teacher t2 = t1; // t2(t1) is also valid
    
    // Modify the copied object's department
    t2.changeDept("Comp");
    
    // Output the details of both objects
    cout << "Teacher 1: " << t1.getName() << ", " << t1.getDept() << ", " << t1.getSubject() << ", " << t1.getSalary() << endl;
    cout << "Teacher 2: " << t2.getName() << ", " << t2.getDept() << ", " << t2.getSubject() << ", " << t2.getSalary() << endl;

    return 0;
}


// We can also do it by : 
// Copy create nahi hoga , we are passing address of original obj only
// Copy constructor
    Teacher(const Teacher &t) {
        name = t.name;
        dept = t.dept;
        subject = t.subject;
        salary = t.salary;
    }
