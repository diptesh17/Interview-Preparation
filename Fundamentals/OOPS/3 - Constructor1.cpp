/* 
- Special method invoked automaticallyat time of object creation
- Same name as classname
- dont have return type
- Call only once , when obj creation takes place
- Memory allocation happens when constructor is called
- If we dont provide , c++ automatically makes it
- Will face error , if its become private member
*/

#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    string dept;
    string subject; 
    double salary;

public:
    // Constructor
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
    // Object creation with constructor
    Teacher t1("Diptesh", "CSE", "C++", 25000);
    
    t1.changeDept("Comp");
    cout << t1.getName() << endl;
    cout << t1.getDept() << endl;

    return 0;
}
