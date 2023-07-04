/*
In C++, a lambda function is an anonymous function that can be defined inline within a code block. 
It is essentially a shorthand way of defining a small function without having to give it a separate name and write a full function declaration.

Lambda functions are created using the syntax:

    [capture list] (parameter list) -> return type { function body }

- the capture list specifies which variables outside the function scope should be accessible within the lambda function
- the parameter list specifies the input parameters
- the return type and function body define the logic of the function.
*/

// Example 1: A lambda function that takes two integers as input and returns their sum.
int x = 5;
int y = 10;
auto sum = [](int a, int b) -> int { return a + b; };
int result = sum(x, y); // result = 15

// Example 2: A lambda function that captures a variable from the surrounding scope and modifies its value.
int x = 5;
auto increment = [&x]() { x++; };
increment(); // x = 6

// Example 3: A lambda function that takes a vector of integers as input, filters out the even numbers, and returns the resulting vector.
std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
auto filter_even = [](const std::vector<int>& v) -> std::vector<int> {
    std::vector<int> result;
    for (int x : v) {
        if (x % 2 == 0) {
            result.push_back(x);
        }
    }
    return result;
};
std::vector<int> even_numbers = filter_even(numbers); // even_numbers = {2, 4, 6, 8}

/*
********************************************************
** How lambda function differ from classica function? **
********************************************************
Lambda functions differ from regular functions in that they have no name and are not declared in a separate function declaration statement. 
They can be defined directly where they are needed, such as in a function call or within a loop. 
This makes them useful for situations where a small, one-time-use function is needed without the overhead of defining a full function with a name. 
Additionally, lambda functions can capture and use variables from their surrounding scope, making them flexible and powerful tools for functional programming in C++.
*/