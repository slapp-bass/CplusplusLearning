# C++ Pointeres and References Notes

## Pointers
Variables that stores the memory address of the specific value in the memory rather than directly stored
### Address-of Operator
- using the address-of operator `&` gets the location in the memory for that specific variable
### Dereferencing Operator
- the dereferencing operator `*` is used to access or modify the value stored at that address the pointer holds.

### Declaration and Initialization
- a pointer is declared by placing an asterisk `*` between the type name and the variable identifier
    - such as `int * pt;`
    - this basicaly says that the `pt` can point to a position in memory which is an `int`
- every pointer is declared for a specific data types or else the compiler won't know how much bytes to read and store
- a pointer must always be initialized to a valid address before applying the dereferencing operator to avoid modifying arbitrary memory locations

### Dynamic Memory Allocation
- pointers allow dynamic memory allocation at runtime from free store using the `new` operator 
- making a variable using the `new` operator lacks a variable name makes the returnign pointer the only way to access the data.
- to prevent memory leaks, the variable must be freed using the `delete` operator or `delete []` in dynamic arrays

## References 
acts as an alias or alternative name for a previously defined variable. operation performed on the reference is performed directly in the variable

### Declaration Syntax
- a reference is declared through using an `&` such as this:
    - `int & rodents = rats;`

### Initialization
- a reference **MUST** be initialized at declaration. once initialized the reference cannot be changed and attempting to reassign a variable results in assigning the new value to the referred variable

### Pass by Reference
- passing by reference allows a called function to modify variables in the called function without pointers to the memories. however using const avoids the performance overhead of copying objects while protecting the original data from modification

### Returning reference
- functions returning a reference returns an alias to the original and avoids creating an temporary return object.
- but a function can **NEVER** return a reference to a local variable allocated within the function because they are destroyed when the function terminates.