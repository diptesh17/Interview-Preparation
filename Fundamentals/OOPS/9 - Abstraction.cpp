// Hiding all unnecessary details & showing only imp parts
// Best to way implement it by - access modifiers

/* 
Access modifiers are one of the way to do abstraction
- hide = private
- show = public
- inherit = protected
*/

// Another way is using abstract classes

/* 
  - Abstract classes are used to provide base class from which other classes can be derived
  - They cannot be instantiated & are meant to be inherited
  - Abstract classes are typically used to define interface for derived classes
  - Abstract class never create object , it actually act as blueprint of other class
  - Pure VF means class automatically becomes abstract
*/ 

// Example : 

class Shape {
virtual void draw() = 0 ; // pure virtual function
}

class Circle : public Shape {
public : 
  void draw() {
    cout << "Drawing circle";
  }
}

int main () {
  Circle c1;
  c1.draw();
}

// Shape class act as blueprint , jiska object nahi bnega
