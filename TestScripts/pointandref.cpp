#include <iostream>
#include <vector>

using namespace std;

// swaps the pointer of the first number and the second
void swapPoint(int * num1, int * num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// swaps the reference of the first number and the second
void swapRef(int & num1, int & num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void minmax(const vector<int> & nums, int & maxnum, int & minnum){
    const int* ptr = nums.data();
    int maxval = *ptr; // not always necessary use reference parameters
    int minval = *ptr;
    for(int i = 1; i < nums.size(); i++){
        ptr ++;
        int curr = *ptr;
        if(curr > maxval){
            maxval = curr;
        } else if (curr < minval){
            minval = curr;
        }
    }

    maxnum = maxval;
    minnum = minval;
}

int main(){
    int num1 = 1; // basic integer
    int num2 = 2; // basic integer
    int & number = num1; // reference(alias) to num1
    int & number2 = num2; // reference(alias) to num2
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<endl;
    // swaps the underlying value of the pointer by first passing in the memory location of num1 and num2 which is converted into a pointer in the function
    swapPoint(&num1, &num2); 
    // swaps the underlying value of the integers by the function converting them into aliases within the function allowing swapping in global frame
    swapRef(num1, num2); 
    cout<<num1<<endl;
    cout<<num2<<endl;
    // same as the other but this time the reference is passed into the function which simply changes the memory location of the reference. swap ref becomes another alias to num1
    swapRef(number, number2);
    cout<<number<<endl;
    cout<<number2<<endl;


    vector<int> numbers = {3, 1, 2, 5, 4};

    int minval;
    int maxval;

    minmax(numbers, maxval, minval);
    cout<<minval<<endl;
    cout<<maxval<<endl;

    return 0;
}