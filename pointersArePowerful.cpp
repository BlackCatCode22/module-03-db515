#include <iostream>

int main() {
    // Declare an integer variable 'a' and a pointer 'p' to an integer
    int a = 10;
    int *p;

    // Assign the address of 'a' to 'p'
    p = &a;

    // Print the address stored in 'p' and the value of 'a' using 'p'
    std::cout << "Address stored in p: " << p << std::endl;
    std::cout << "Value of a using p: " << *p << std::endl;

    // Change the value of 'a' using 'p' and print the new value of 'a'
    *p = 20;
    std::cout << "New value of a: " << a << std::endl;

    return 0;
}
