# Object Oriented Programming Notes

## Classes and Objects
### Class
- Blueprint of a specific data that can manipulate its contents through using a method
### Object
- an instance of a class and is stored in the memory with the specifications of the class

## Encapsulation and data hiding
- binds data representation and methods into a unified class package while separating interface details from implementation details
- controls the access and modifications of data by client programs to preserve data integrity and accidental corruption
- `private` only accessible by class member functions or friend functions
- `public` accessible by any function
- `protected` similar to `private` members to the outside but accessed directly by derived classes

## Inheritance
- allows derived classes to inherit properties, data members, and methods from an base class
- is-a relationship
- Derived classes inherit the base class’s implementation and interface, and can add new data members, add new methods, or redefine inherited method

## Polymorphism
- C++ supports polymorphism through function overloading, operator overloading, and virtual function

## Constructors and Destructors
### Constructors
- member functions that holds the same name as the class name, returns no value. it is used to initialize a instance of an class through specified data
### Copy Constructors
- constructor in form of `Class_name(const Class_name &)` when initializing a object with another object from the same class. 
- classes allocating dynamic memory through the new keyword must use a copy constructor to perform deep copying.
### Destructors
- member functions with a tilde that are called automatically when an object expires to clean up dynamic memory or resources

## This
- the `this` pointer is a pointer that points to the invoking object and using the dereferencing operator yields the object

## Virtual Function and Dynamic Binidng
- declaring a base class member function using the `virtual` keyword enables dynamic binding
- When a virtual function is invoked via a base-class reference or pointer pointing to a derived object, C++ uses the actual object type rather than the pointer/reference type to choose the method version

## Creating a class
- when declaring a class, we just say `class <name>`and then encapsulate everything of the class contents in curly braces
- inside, we have sections for private and public access values and here instead of curly braces, we use colons after the keywords 
- the variables and functions here are made basically the same as anywhere else, but values don't have to be initalized here. same goes with functions, it can be defined in the class or it can be done outside as long as it is somewhere.
- this allows the header files and declaration files to be separate but work together in a final place.