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
    return 0;
}