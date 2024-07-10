/* 

Shallow copy : it copies all of the member values from one obj to another
Deep copy : not only copies the member values but also makes copies of any dynamically allocated memory that the members point to

- Mostly we makes shallow copy ex constructor
- Issue occur when we allocate memory using new or dynamic 

*/

// Example of Deep copy ( cgpa )

#include <iostream>
#include <cstring>  // For strcpy and strlen
using namespace std;

class Student {
private:
    string name;
    double *cgpa;

public:
    // Constructor
    Student(string sName, double sCgpa) {
        name = sName;
        cgpa = new double;
        *cgpa = sCgpa;
    }

    // Copy constructor (Deep Copy)
    Student(const Student &s) {
        name = s.name;
        cgpa = new double;
        *cgpa = *(s.cgpa);
    }

    // Destructor
    ~Student() {
        delete cgpa;
    }

    // Getter methods
    string getName() {
        return name;
    }

    double getCgpa() {
        return *cgpa;
    }

    // Setter methods
    void setName(string newName) {
        name = newName;
    }

    void setCgpa(double newCgpa) {
        *cgpa = newCgpa;
    }

    // Methods to display data
    void display() {
        cout << "Name: " << name << ", CGPA: " << *cgpa << endl;
    }
};

int main() {
    // Object creation with constructor
    Student s1("Diptesh", 9.5);

    // Object creation with copy constructor
    Student s2 = s1;

    // Modify the copied object's CGPA
    s2.setCgpa(8.7);

    // Output the details of both objects
    cout << "Student 1: ";
    s1.display();
    cout << "Student 2: ";
    s2.display();

    return 0;
}


/* Why to prefer deep copy over shallow copy
    Copy constructor actually gives us new copy of same data , if it consist of a member which is dynamically
    allocated then both the obj are points to same location , and if second obj change , the data then first obj also 
    retrive the updated one 
*/
