/*
Classes are an expanded concept of data structures: like data structures, they can contain data members, but they can also contain functions as members.

An object is an instantiation of a class. In terms of variables, a class would be the type, and an object would be the variable.
*/

// Example of class definition:
class class_name {
  access_specifier_1:
    member1;
  access_specifier_2:
    member2;
  ...
} object_names;

/*
The body of the declaration can contain members, which can either be data or function declarations, and optionally access specifiers.
An access specifier is one of the following three keywords: private, public or protected.

These specifiers modify the access rights for the members that follow them:

- private members: of a class are accessible only from within other members of the same class (or from their "friends").
- protected members: are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes.
- public members: are accessible from anywhere where the object is visible.

their "friends").
protected members are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes.
Finally, public members are accessible from anywhere where the object is visible.

By default, all members of a class declared with the class keyword have private access for all its members. 
*/

// Constructors
/*
A class can include a special function called its constructor, which is automatically called whenever a new object of this class is created, allowing the class to initialize member variables or allocate storage.
This constructor function is declared just like a regular member function, but with a name that matches the class name and without any return type; not even void.

*/

// example: class constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int,int);
    int area () {return (width*height);}
};

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

//  Overloading constructors

/*
Like any other function, a constructor can also be overloaded with different versions taking different parameters: 
with a different number of parameters and/or parameters of different types. 

The compiler will automatically call the one whose parameters match the arguments:
*/

// overloading class constructors
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    int area (void) {return (width*height);}
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rect (3,4);
  Rectangle rectb;
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}

// Pointers to classes
/*

Objects can also be pointed to by pointers: Once declared, a class becomes a valid type, so it can be used as the type pointed to by a pointer. 
Similarly as with plain data structures, the members of an object can be accessed directly from a pointer by using the arrow operator (->)
*/

// Destructor
/*
Destructors fulfill the opposite functionality of constructors: 
They are responsible for the necessary cleanup needed by a class when its lifetime ends

let's imagine that the class in the last example allocates dynamic memory to store the string it had as data member; in this case, it would be very useful to have a function called automatically at the end of the object's life in charge of releasing this memory. To do this, we use a destructor. A destructor is a member function very similar to a default constructor: it takes no arguments and returns nothing, not even void. It also uses the class name as its own name, but preceded with a tilde sign (~):
*/