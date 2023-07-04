#include <cstdio>

// In C++, a namespace is a feature that allows you to group related declarations (such as variables, functions, classes, and structures) 
// into a named scope, which helps to avoid naming conflicts.
using namespace std;

int main()
{
    int ia[] = { 1, 2, 3, 4, 5 };
    
    // When used with a variable declaration, the auto storage class tells the compiler to automatically deduce the data type of the variable based on the initializer expression.
    for( auto i : ia ) {
        printf("i is %d\n", i);
    }
    return 0;
}
