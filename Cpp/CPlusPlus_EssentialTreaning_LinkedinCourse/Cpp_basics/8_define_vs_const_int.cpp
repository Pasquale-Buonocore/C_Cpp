/*

The #define and const are two different ways to define constants in C++.

The #define directive is a preprocessor macro that performs textual substitution.
When the preprocessor encounters #define a 5, it replaces all occurrences of a with 5 in the source code before it is compiled. 
This means that a is not actually a variable, but a textual replacement. For example:

*/
#define a 5

int main() {
    int x = a;
    // This will be replaced with: int x = 5;

    /* On the other hand, const int a = 5 declares a true constant variable named a. 
    This means that a is a variable that cannot be modified after it is initialized.
    For example: */
    const int a = 5;

    int x = a;
    // This is equivalent to: int x = 5;  a cannot be modified at this point
    return 0;
}

/* 
There are several differences between using #define and const int to define constants:
    - Type safety:  const int is type safe, while #define is not. 
                    With const int, the compiler knows the type of the constant and can perform type checking, which helps catch errors at compile-time. 
                    With #define, the preprocessor does not perform any type checking, which can lead to errors at runtime.

    - Scope: const  int has a scope, while #define does not. 
                    const int is limited to the scope in which it is defined, while #define is a global replacement that can affect the entire source file.

    - Debugging:    const int is easier to debug than #define, because const int constants have a memory location and can be inspected during debugging. 
                    #define constants do not have a memory location, so they cannot be inspected.

In general, it is recommended to use const int instead of #define for defining constants in C++, as it is more type-safe and easier to debug.

*/