# C++ Notes

## C++ Initiation
### myfirst.cpp
```C++
#include <iostream>                                     // a PREPROCESSOR directive
int main(void)                                              // function header
{                                                       // start of function body
    using namespace std;                                // make definitions visible
    cout << "Come up and C++ me some time.";            // message
    cout << endl;                                       // start a new line
    cout << "You won’t regret it!" << endl;             // more output
    return 0;                                           // terminate main()
}                                                       // end of function body
```
#### Main Function - 24/09
- create an C++ file with .cpp
- the `int main()` is a function header (the main is to say what code to run)
- the `return` terminates the function
- the semicolon at the end tells the program when the line ends. it is used as a separator
- the function header is the same as java, the return type, and then the function name, then the parameter list.
- for the main function atleast, it is the function where the compiler actually runs code.
- you can add void inside the argument list to explicitly tell the program there are no arguments that will be passed in
- C++ is case sensitive

#### C++ Comments - 24/09
- comment with using double slashes `//`
- for comments, you can use C style comments using `/*` and `*/`, which the last one acts as the end of the comment. this allows multi line comments.

#### C++ Preprocessor and `iostream` - 24/09
- C++ uses a preprocessor. this is a program that processes the source file before compiling. 
- a preprocessor directive is needed to tell the compiler what kind of content the program needs. it is doesn't alter the original code, but it will add more information about specific functions into the code

#### Header Filenames - 28/09
- files such as `iostream` are called include files because it is included in other files, or header files because it comes at the start
- the `h` extention was used as a way to identify the file name in C, which is still usable in C++, but it got rid of the need to add it, for example the `math.h` file for various math functions in C was used. The `h` extension is only for older C header files now which C++ can still use, and C++ header files doesn't have the extension. such as `iostream.h` -> `iostream`
- some C header files has changed in its name so it matches the C++ header files by dropping the `h` extension, and prefixing with a `c`. for example the file `math.h` becaume `cmath` to indicate it comes from C

#### Namespaces - 28/09
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

#### Output with `cout` - 28/09
- any series of characters enclosed in double quotes (`"text"`) is considered a character string
- the `<<` notation indicates the string statement is being sent into the `cout`, and the symbol points the direction of the flow
- `cout` is a predefined object that displays various things
- the `cout` object has a simple interface, for example if there is a string, you can do `cout << string` to display the string. 
- this can be viewed that the output is a stream, a seires of characters flowing from the program. 
- so in the case of `cout << "Come up and C++ me some time.";`, we can say the string `"Come up and C++ me some time."` is being inserted into the output stream

#### The Manipulator `endl` - 28/09
- `endl` is a special notation that represents the concept of beginning a new line.
- inserting this into the output stream causes the string cursor to move to the beginning of the next line. essentially ending a line.
- these codes with special notations such as `endl` are called manipulators.
- `cout` doesn't by default move the output to the next line, and even if you call `cout` in multiple lines, the output will just come in the same line. this is why `endl` is required to move to the next lines if you want to have texts spearately. 

#### The newline character - 30/09
- `\n` is a newline character which is a way to move to the next line without using `endl;`
- it overall reduces time to write a single line of code
- the key difference between `\n` and `endl` is that `endl` guarantees that the output will be flushed before the program moves on, meaning that if there is a input right after the display, the text will be immediately displayed, but when using `\n`, it doesn't guarantee an output for example in the same case, the text before the input won't be displayed until after inputting a value.

#### C++ Source Code Formatting
- languages such as FORTRAN are line oriented meaning the enter key(known as carriage return), each line is what separates the code, but in C++ the separator is a semicolon. 
- this means that the carriage return can be treated similar to space or a tab.
- you can use a space where you use a carriage return and vice versa therefore allowing you to spread single statements over multiple lines, or multiple statements in a single line.
- for example the myfirst.cpp can be reformatted such as this:
```C++
#include <iostream>
int
main
() { using
namespace
std; cout
<<
"Come up and C++ me some time."
; cout <<
endl; cout <<
"You won’t regret it!" <<
endl;return 0; }
```
- however there are limits to how much you can do these, as you can't put a space, tab, or a carriage return in the middle of an element, such as name, nor carriage return in the middle of a string. 
- this is an example of what you can't do:
```C++
int ma in() // INVALID -- space in name
re
turn 0; // INVALID -- carriage return in word
cout << "Behold the Beans
of Beauty!"; // INVALID -- carriage return in string
```
- but one thing to note, C++11 changed this to allow carriage return in strings

#### Tokens and White Space in Source Code
- invisible elements in a line of code are called tokens
    - some examples are:
    - variables
    - function names
    - single characters
    - parenthesis and commas
    - etc.
- tokens generally must be separated from the next using a space, tab, or carriage return which are called white spaces.
- single characters such as commas, parenthesis, and braces are few examples that doesn't need to be separated by white spaces (but could be) for the code to work.
- any white space can be interchanged.
- some examples where you need an white space are:
```C++
return0; // INVALID, must be return 0;
return(0); // VALID, white space omitted
return (0); // VALID, white space used
intmain(); // INVALID, white space omitted
int main() // VALID, white space omitted in ()
int main ( ) // ALSO VALID, white space used in ( )
```

#### C++ Source Code Style
- just because C++ gives freedom of formatting, it doesn't mean you should keep your code ugly. 
- basically having a good code readability is important for you as a coder, and collaboration so that peoople can understand
- the main 4 rules most programmers use (doesn't mean I need to) are:
    - One statement per line
    - An opening brace and a closing brace for a function, each of which is on its own line
    - Statements in a function indented from the braces
    - No whitespace around the parentheses associated with a function name
- the first 3 is to keep the code clean and easy to read, the 4th is to differentiate code between functions and other code using parenthesis such as loop

## C++ Statements
### carrots.cpp
```C++
#include <iostream>
int main()
{
    using namespace std;

    int carrots;                        // declare an integer variable

    carrots = 25;                       // assign a value to the variable
    cout << "I have ";
    cout << carrots;                    // display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;              // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}
```
#### Declaration Statements and Variables
- in order to store information in the computer, you have to specify the storage location and storage space the information takes.
- you store C++ variables using a declaration statement, indicating the type, and a label for the information.
- the statement provides 2 things, the type of information and the label of the information. for example having `int` at the beginning specifies the information is an integer, similar to how we declare a return type for a function.
- the compiler takes care of the specifics, where the memory is allocated and labled in memory. 
- just like in any other language(or most languages) not declaring a variable will result in an error.
- a declaration statement is called a defining declaration statement or definition for short, and in more complex situations there are reference declarations. 
- reference declarations tells the computer to use a variable that was defined previously. 
- in languages such as C and Pascal, variable declaration normally comes at the very beginning of the program. but in C++, there isn't this restriction and you can declare a variable right before it is first used, for code simplicity


#### Assignment Statements
- an assignment statement assigns a value to a variable, more specifically a storage location.
- the `=` symbol is an assignment operator just like in any other language, and something you can do in C++ is using is serially:
```C++
int steinway;
int baldwin;
int yamaha;
yamaha = baldwin = steinway = 88;
```
- the code above you evaluate from right to left, basically going from 88 is assigned to steinway, which is now 88, which is now assigned to baldwin, which is now 88, which is assigned to yamaha.
- you can modify variables using the assignment operator by for example using arithmetics for ints.

#### Variables in `cout`
- you can print out variables in C++ using `cout` and the insertion operator `<<`.
- printing an integer, the code first converts the variable into the integer stored, lets say 25. after that it translates it's values into the corresponding output characters.
- keep in mind that 25 and "25" is not the same
- in C, using printf required having special characters before the given variable when joining things in a print statement, such as indicating the text is joining a string, or a text is joining an integer, etc, but using `cout`, it automatically adjusts the output to get rid of the requirements in C.

## More C++ Statements
### getinfo.cpp
```C++
#include <iostream>
int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;                    // C++ input
    cout << "Here are two more. ";
    carrots = carrots + 2;
    // the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}
```
#### Using `cin`
- the line `cin >> carrots` allows users to input into the code, through whatever they use such as the terminal
- this line considers the output of the input to be flowing into the variable `carrots` indicated by the insertion operator `>>`.
- `cin` similar to `cout` is a smart object and also converts the input to whatever type the variable needs or stores

#### `cout` Concatenation
- using the insertion operator, it can be used to concatenate characters together by combining it with multiple strings, varibles, and manipulators. 
- this doesn't have to be in the same line, it could be spearated in multiple lines, using multiple `cout`, and as long as we don't use any manipulators or newline characters, the code will output on the same line. 

#### `cin` and `cout` Classes
- classes similar to other OOP in other languages, are basically blueprints and the objects are instances of these classes
- variables and objects aren't exactly the same thing. `cout` is an object that was created with the properties of the `ostream` class, and `cin` is an object that was created with the properties of the `istream` class.
- classes are generally user defined types, but there are like function libraries, class libraries that was predefined somewhere else.
