/*
In C++, templates are a powerful feature that allows you to write generic code that can work with different data types. 
Essentially, templates are a way to define a blueprint or a pattern for a function or a class that can be used with different data types.

Templates are defined using the keyword template, followed by the template parameters in angle brackets (<>). 
For example, here is a template function that adds two values of any data type:
*/

/* Templates can be:
    - Template functions (as the one seen before)
    - Template class
*/

// ---------------------
// - TEMPLATE FUNCTION -
// ---------------------

#include <iostream>
#include <cstdio>
using namespace std;

template<typename T>
T add(T a, T b)
{
    return a + b;
}

/*
In this example, the template parameter T is a placeholder for any data type that can be used with the function. 
When you call the add function with two values, the compiler determines the data type of the values and generates a specialized version of the function that works with that data type.
*/
int main(){

    int x = add<int>(5,10);
    double y = add<double>(5.1,10.3);

    cout << "x as int is equal to: " << x << endl;
    cout << "y as int is equal to: " << y << endl;

    return 0;
}

// ------------------
// - TEMPLATE CLASS -
// ------------------

/*
In C++, a template class is a class that is defined with generic types or values, which can be specified later when the class is instantiated. 
The idea behind templates is to write code that can work with a variety of data types without duplicating the code for each type.

A template class declaration begins with the keyword "template", followed by the template parameter list enclosed in angle brackets "< >". 
For example, a template class for a generic container might be declared like this:
*/

template<class T>
class Container {
public:
    void add(T element);
    T get(int index);
    // other methods and data members
};

/*
In this example, "T" is the template parameter, which can be replaced with any data type when an instance of the class is created. 
For instance, to create a container of integers, you would instantiate the template class with "int" as the template argument:
*/

Container<int> intContainer;
/*
This would create a Container object that can hold integers, and all the methods in the class would work with integers.
Template classes are useful for creating generic data structures and algorithms that can be used with different data types.
They also enable code reuse, because you only need to write the algorithm or data structure once, and it can be used with any data type that meets the requirements specified in the template class.
/*