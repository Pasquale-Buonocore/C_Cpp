/* 
--- Type aliases (typedef / using) ---
A type alias is a different name by which a type can be identified. In C++, any valid type can be aliased so that it can be referred to with a different identifier.
typedef existing_type new_type_name ;

More recently, a second syntax to define type aliases was introduced in the C++ language:
using new_type_name = existing_type ;

--- Unions ---
Unions allow one portion of memory to be accessed as different data types. 
Its declaration and use is similar to the one of structures, but its functionality is totally different:

union type_name {
  member_type1 member_name1;
  member_type2 member_name2;
  member_type3 member_name3;
  .
  .
} object_names;


This creates a new union type, identified by type_name, in which all its member elements occupy the same physical space in memory. 
The size of this type is the one of the largest member element. For example:

union mytypes_t {
  char c;
  int i;
  float f;
} mytypes;

Each of these members is of a different data type. But since all of them are referring to the same location in memory, the modification of one of the members will affect the value of all of them.
It is not possible to store different values in them in a way that each is independent of the others.

Here are some specific use cases where unions can be useful:

Saving memory: Unions can help you save memory by allowing you to use the same memory location for different data types. For example, if you have a data structure where one of the fields can be an integer or a floating-point number, you can use a union to store both types of data in the same memory location, saving memory.

Interacting with hardware: Unions can be useful when you need to interact with hardware, such as when reading or writing data to a device register. In this case, the data in the register may be represented in different formats (e.g., as a bitfield or as a float), and you can use a union to access the data in the appropriate format.

Converting data types: Unions can also be useful when you need to convert data types. For example, you can use a union to convert an integer to a floating-point number or vice versa by storing the integer in the union and then accessing the floating-point number.


--- Anonymous unions ---
*/