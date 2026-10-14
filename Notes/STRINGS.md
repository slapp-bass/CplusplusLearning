# String Notes

## String Indexing
- individual characters in a string can be accessed using the bracket notation with integer `i` where the indexing is zero based
- for non-const strings, the [] returns a reference to that specific character which allows individual modification
- for const strings, the [] returns a overloaded const version returns a constant reference meaning you can't modify it, only view it

## String slicing
### Substring constructor
`string(const string & str, size_type pos, syze_type n = npos)`
- this creates a new string object containing n characters from str, startig at index pos. (check strings.cpp)

### Substring methods
- locate specific slice positions using search methods such as:
    - .find()
    - .rfind()
    - .find_first_of()
    - .find_last_of()
    - .find_first_not_of()
    - .find_last_not_of()
- these will return a index position if successfull, if not, return npos

## Other functions
- use the addition `+`, `+=` for concatenation
- `.length()` and `.size()` both return the total number of character
- you can use all 6 comparison operators where it checks every single character equality