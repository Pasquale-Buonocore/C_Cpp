#include <cstdio>

/* TYPE QUALIFIERS

**************
** VOLATILE **
**************
    The volatile qualifier is used to indicate that a variable's value can be changed unexpectedly by external factors, such as hardware devices or other threads. 
    It tells the compiler not to optimize access to the variable and to always fetch its value from memory.

*************
** MUTABLE **
*************
    The mutable qualifier can be applied only to non-static class data members. 
    It allows the member to be modified even if the containing object is declared as const. 
    This is useful in cases where a member variable needs to be updated for bookkeeping purposes or caching, even though the object itself is logically immutable.

**************
** REGISTER **
**************
    The register is a qualifier in C++, but it is not commonly used anymore.
    It was originally introduced in C as a way to suggest to the compiler that a variable should be stored in a CPU register for faster access.

**********
** AUTO **
**********
    In C++11 and later versions, the auto keyword is used as a type inference specifier. 
    Instead of explicitly specifying the type of a variable, you can use auto and let the compiler deduce the type from the value it is initialized with.

    auto x = 42;   // x is deduced to be of type int
    auto y = 3.14; // y is deduced to be of type double


***********
** CONST **
***********
    The const keyword is a type qualifier that can be applied to variables, functions, and pointers to indicate that their value cannot be modified.
    When used with a variable, it means that the value of the variable cannot be changed once it has been initialized.
    When used with a pointer, it means that the value pointed to by the pointer cannot be changed.

************
** STATIC **
************
    The static keyword has different meanings depending on where it is used. Here are a few examples:
    
    --------------------------
    Static local variables
    --------------------------

    When used inside a function, the static keyword can be used to declare a local variable that retains its value between function calls.
    For example:

    void example_function()
    {
        static int counter = 0;
        counter++;
        std::cout << "Function called " << counter << " times.\n";
    }

    In this case, the counter variable is initialized only once when the function is first called, and its value is retained between calls. If static were not used, the counter variable would be re-initialized to 0 every time the function is called.

    --------------------------
    Static class members
    --------------------------

    When used inside a class definition, the static keyword can be used to declare a class member that is shared by all instances of the class.
    For example:

    class ExampleClass
    {
    public:
        static int static_member;
    };

    int ExampleClass::static_member = 42;
    In this case, the static_member variable is shared by all instances of the ExampleClass class, and its value can be accessed and modified using the class name.

    --------------------------
    Static functions
    --------------------------
    When used inside a class definition, the static keyword can also be used to declare a static member function that can be called without an instance of the class.
    For example:

    class ExampleClass
    {
    public:
        static void static_function()
        {
            std::cout << "This is a static member function.\n";
        }
    };
    In this case, the static_function method can be called using the class name, without needing an instance of the class.
