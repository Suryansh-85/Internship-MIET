
// Auto Storage Class
#include <iostream>

int main() {
    auto x = 10;
    std::cout << "The value of x is: " << x << std::endl;
    return 0;
}


// Register Storage Class
#include<iostream>
using namespace std;
void example(){
    register int counter =0 ;
    for(register int i =0; i<10; i++){
        counter +=i;
    }
}


//Static storage class
#include <iostream>

void example() {
    static int count = 0;
    count++;
    std::cout << "Count is: " << count << std::endl;
}
int main() {
    example();
    example();
    example();
    
    return 0;
}