// Encapsulation : wrapping up of data & member functions in single unit called class
// capsule (which is a class)= properties + member functions 

// Aim : Data hiding , make sensitive stuff private

#include <iostream>
using namespace std;

class Teacher {
    // Access modifier:
private:
    // Properties or attributes
    string name;
    string dept;
    string subject;
    double salary;
    
public:
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

    // Setter methods
    void setName(string newName) {
        name = newName;
    }

    void setDept(string newDept) {
        dept = newDept;
    }

    void setSubject(string newSubject) {
        subject = newSubject;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }

    // Methods or member function
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    // Object creation
    Teacher t1;
    t1.setName("Diptesh");
    t1.setDept("CSE");
    t1.setSubject("C++");
    t1.setSalary(25000);
    
    t1.changeDept("Comp");
    cout << t1.getName() << endl;
    cout << t1.getDept() << endl;

    return 0;
}
 
