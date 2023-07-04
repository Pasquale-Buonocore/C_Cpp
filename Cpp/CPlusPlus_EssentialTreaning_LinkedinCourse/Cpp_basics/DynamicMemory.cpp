/*
Programs need to dynamically allocate memory, for which the C++ language integrates the operators new and delete.

--- Operators new and new[] ---
Dynamic memory is allocated using operator new. new is followed by a data type specifier and, if a sequence of more than one element is required, the number of these within brackets []. It returns a pointer to the beginning of the new block of memory allocated. Its syntax is:

pointer = new type
pointer = new type [number_of_elements]

The first expression is used to allocate memory to contain one single element of type type. The second one is used to allocate a block (an array) of elements of type type, where number_of_elements is an integer value representing the amount of these.
The dynamic memory requested by our program is allocated by the system from the memory heap.

However, computer memory is a limited resource, and it can be exhausted. Therefore, there are no guarantees that all requests to allocate memory using operator new are going to be granted by the system.
C++ provides two standard mechanisms to check if the allocation was successful:
1. handling exceptions
2. nullpointer returns.
*/

int * foo;
foo = new (nothrow) int [5];
if (foo == nullptr) {
    // error assigning memory. Take measures.
}


/* 
--- Operators delete and delete[] ---
In most cases, memory allocated dynamically is only needed during specific periods of time within a program; once it is no longer needed, it can be freed so that the memory becomes available again for other requests of dynamic memory. This is the purpose of operator delete, whose syntax is:
*/ 
delete pointer;
delete[] pointer;

/*
It is considered good practice for programs to always be able to handle failures to allocate memory, either by checking the pointer value (if nothrow) or by catching the proper exception.
*/

