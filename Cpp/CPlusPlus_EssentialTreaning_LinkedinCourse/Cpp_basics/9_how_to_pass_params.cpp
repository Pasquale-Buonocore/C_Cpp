/*
In C++, there are three ways to pass a parameter to a function: by value, by pointer, and by reference.

-----------------
- Pass by value -
-----------------
    When a parameter is passed by value, a copy of the argument is made and passed to the function. 
    Any modifications made to the parameter inside the function will not affect the original argument. 
    This is the default way of passing parameters in C++.
    Example:

    void func(int x) {
        x = x + 1;
        cout << "Value of x inside the function: " << x << endl;
    }

    int main() {
        int num = 5;
        func(num);
        cout << "Value of num after function call: " << num << endl;
        return 0;
    }

    Output:
    Value of x inside the function: 6
    Value of num after function call: 5

-------------------
- Pass by pointer -
-------------------
    When a parameter is passed by pointer, the address of the argument is passed to the function. 
    This allows the function to access and modify the argument directly. 
    However, it is the responsibility of the caller to ensure that the pointer points to a valid memory location.
    Example:

    void func(int *x) {
        (*x)++;
        cout << "Value of x inside the function: " << *x << endl;
    }

    int main() {
        int num = 5;
        func(&num);
        cout << "Value of num after function call: " << num << endl;
        return 0;
    }

    Output:
    Value of x inside the function: 6
    Value of num after function call: 6

---------------------
- Pass by reference -
---------------------
    When a parameter is passed by reference, a reference to the argument is passed to the function. 
    This allows the function to access and modify the argument directly, without the need for pointers. 
    Any changes made to the parameter inside the function will affect the original argument.
    Example:

    void func(int &x) {
        x++;
        cout << "Value of x inside the function: " << x << endl;
    }

    int main() {
        int num = 5;
        func(num);
        cout << "Value of num after function call: " << num << endl;
        return 0;
    }

    Output:

    Value of x inside the function: 6
    Value of num after function call: 6


    Passing parameters by reference is generally more efficient than passing by pointer, as it avoids the overhead of dereferencing the pointer. 
    However, it is important to be careful when modifying parameters by reference, as it can sometimes lead to unintended consequences.

    Pointers are variables that hold memory addresses, while references are aliases to objects.
    Pointers can be null and can be reassigned to point to different objects, while references cannot be null and cannot be reassigned.