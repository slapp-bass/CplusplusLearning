# C++ Notes

## C++ Initiation
### myfirst.cpp
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
- `using namespace std;` makes the definitions in `iostream` available
- this is called `using` directive
- namespace support is to simplify the writing of large programs that combine multiple vendors and to organize the code. 
- the namespace lets the program know which function comes from which vendor.
    - for example lets say there is a function `wanda()`, and it exists in 2 separate vendors and the program doesn't know which one you want to use
    - so Microflop uses a namespace `Microflop` and Piscine uses `Piscine` so that the program can specify which `wanda()` function you want to use. 
    - this is done by `Microflop::wanda()` for Microflop, `Piscine::wanda()` for Piscine. 
    - therefore in the same program, it can look like this:
    ```C++
    Microflop::wanda("go dancing?"); // use Microflop namespace version
    Piscine::wanda("a fish named Desire"); // use Piscine namespace version
    ```
- standard components in C++ is placed in the namespace std such as classes, variables, and functions.
- this means the `cout` and `endl` from `iostream` is really `std::cout` and `std::endl`
- if you ommit the `using` directive you will need to write the full thing out
- however not many people want to write the full thing, therefore people use the directive to get rid of the need for `std::`.
- but this could cause problems in larger projects with multiple namespaces, and modern regards this as a bit lazy
- they either use the `std::` qualifier or the `using` declaration for specific functions for example:
```C++
using std::cout; // make cout available
using std::endl; // make endl available
using std::cin; // make cin available
```
- the entire thing is just to make every single function in the namespace available

#### Output with `cout`
- any series of characters enclosed in double quotes (`"text"`) is considered a character string
- the `<<` notation indicates the string statement is being sent into the `cout`, and the symbol points the direction of the flow
- `cout` is a predefined object that displays various things
- the `cout` object has a simple interface, for example if there is a string, you can do `cout << string` to display the string. 
- this can be viewed that the output is a stream, a seires of characters flowing from the program. 
- so in the case of `cout << "Come up and C++ me some time.";`, we can say the string `"Come up and C++ me some time."` is being inserted into the output stream

#### The Manipulator `endl`
- `endl` is a special notation that represents the concept of beginning a new line.
- inserting this into the output stream causes the string cursor to move to the beginning of the next line. essentially ending a line.
- these codes with special notations such as `endl` are called manipulators.
- `cout` doesn't by default move the output to the next line, and even if you call `cout` in multiple lines, the output will just come in the same line. this is why `endl` is required to move to the next lines if you want to have texts spearately. 

#### The newline character