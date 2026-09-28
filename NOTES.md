# C++ Notes

### C++ Initiation
#### Main Function
- create an C++ file with .cpp
- the `int main()` is a function header (the main is to say what code to run)
- the `return` terminates the function
- the semicolon at the end tells the program when the line ends. it is used as a separator
- the function header is the same as java, the return type, and then the function name, then the parameter list.
- for the main function atleast, it is the function where the compiler actually runs code.
- you can add void inside the argument list to explicitly tell the program there are no arguments that will be passed in
- C++ is case sensitive

#### C++ Comments
- comment with using double slashes `//`
- for comments, you can use C style comments using `/*` and `*/`, which the last one acts as the end of the comment. this allows multi line comments.

#### C++ Preprocessor and `iostream`
- C++ uses a preprocessor. this is a program that processes the source file before compiling. 
- a preprocessor directive is needed to tell the compiler what kind of content the program needs. it is doesn't alter the original code, but it will add more information about specific functions into the code

#### Header Filenames
- files such as `iostream` are called include files because it is included in other files, or header files because it comes at the start
- the `h` extention was used as a way to identify the file name in C, which is still usable in C++, but it got rid of the need to add it, for example the `math.h` file for various math functions in C was used. The `h` extension is only for older C header files now which C++ can still use, and C++ header files doesn't have the extension. such as `iostream.h` -> `iostream`
- some C header files has changed in its name so it matches the C++ header files by dropping the `h` extension, and prefixing with a `c`. for example the file `math.h` becaume `cmath` to indicate it comes from C.

#### Namespaces
- 