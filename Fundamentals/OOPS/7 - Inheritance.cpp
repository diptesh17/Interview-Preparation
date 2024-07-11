/*  
- Process in which the properties & member function of base class are passed on to the derived class
- Class A ( Parent / base) & Class B ( child / derived )
- use for code reusability
*/

// Base class
class Person {
public:
  string name;
  int age;

  Person(string name , int age)
  {
    this->name = name;
    this->age = age;
  }
};

// Derived class
class Student : public Person {
public:
  // name , age , rollno
  int rollno;

void getInfo()
{
  cout << name << age << rollno << endl;
}

};

int main()
{
  Student s1;
  s1.name = "Diptesh";
  s1.age = 21;
  s1.rollno = 47;

  s1.getInfo();
}


/* 
- Must know stuff : 
    - When we create obj of derived class , first base class constructor will call , then derived class
    - In destructor its opposite , first derived will free then base class will free
*/


// Modes of inheritance 

/* 

              Derived Class         Derived class           Derived class
Base class    Private Mode          Protected Mode          Public Mode
Private       Not inherited            --//--                  --//--
Protected     Private               Protected               Protected
Public        Private               Protected               Public

*/


// Types of inheritance 

/* 
- Single inheritance : parent -> child
- Multi level inheritance : parent -> parent -> child
- Multiple inheritance : Child is derived from more than one parent class ( : public c1 , public c2)
- Hierarchial inheritance : Two or more derived classes inherit from single base class
- Hybrid inheritance : parent -> c1 , c2 -> new_c1
*/
