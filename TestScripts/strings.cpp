#include <iostream>
#include <string>

int main(){
    std::string four = "fdasihgewpghpahpdosihgaesgdas";

    std::string eight(four, 7, 16);
    std::cout<< eight << std::endl;
    return 0;
}