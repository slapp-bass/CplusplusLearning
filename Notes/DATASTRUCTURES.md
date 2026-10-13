# Datastructure Notes

## Vectors
- dynamic array class in the standard library
- unlike built in arrays, it is dynamic and doesn't require a start size at compile time, and automatically handles memory allocation.
- include `<vectors>` in order to use the vector class
```C++
#include <vector>

std::vector<int> numbers; // Creates an empty vector of integers 
std::vector<double> scores(10); // Creates a vector of 10 doubles 
```
- vectors allocate memory dynamically in the heap and using new and delete behind the scenes
### Element access
- use the bracket notation `[]` to access a specific value at a index
- use `at()` to get a value at a specific inidex but with boundary checked access meaning if the value is index out of bounds it triggers runtime check to prevent memory corruption
### key functions
- `push_back(val)`: Appends a new element to the end of the vector and automatically resizes memory if needed 
- `size()`: gets the size of the vector
- `erase(it1, it2)`: Removes a range of elements defined by iterators
- `insert(pos, it1, it2)`: Inserts a range of elements ahead of a specified position
- `begin()` and `end()`: Return iterators pointing to the first element and one past the last element (past-the-end), respectively

## Hashmaps
- stores data as key-value pairs where each unique value(key) is mapped onto a different value
- uses the standard library `std::unordered_map`
- unlike maps, which uses binary search trees and sorted keys, unordered_map uses a hash table where a hash function converts a key into a bucket index where the corresponding value is stored
- average time complexity is O(1) while worst case is O(n)
- kind of like python dictionaries
```C++
#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    // Key: string, Value: int
    std::unordered_map<std::string, int> ageMap;

    // inserting values
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;

    // accessing
    std::cout<< "Alice: " << ageMap["Alice"] << std::endl;

    // check mapping
    if (ageMap.find("Bob") != ageMap.end()){ 
        std::cout << "Bob is in the map.\n"; 
    }
}
```

## Other Datastructures
### Arrays
- `std::array`
- allocates memory on a stack (fixed size)
### Maps
- `std::map`
- similar to hasmaps but runs on O(log n) and sorted key values
### Sets
- `std::set`
- a container storing unique key values in order
### Linked lists
- `std::list`
- consists of sequence of nodes, where each node contains a value and a pointer to the next node
- memory of list nodes ins't contiguous meanign it allows O(1) insertion and deletion
### Stacks
- `std::stack`
- last in first out
- goes from the top to bottom
### Queues
- `std::queue`
- first in first out
- added to the end, taken out from the top start