#include <iostream>

// Declaration of the external variable
extern int count;

void increment();

int main() {
    // Initialize the external variable
    count = 0;

    std::cout << "Initial count: " << count << std::endl;

    increment();
    increment();
    increment();

    std::cout << "Final count: " << count << std::endl;

    return 0;
}//;]''