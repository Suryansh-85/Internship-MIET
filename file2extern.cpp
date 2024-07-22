#include <iostream>

// Definition of the external variable
int count;

void increment() {
    count++;
    std::cout << "Count in increment function: " << count << std::endl;
}