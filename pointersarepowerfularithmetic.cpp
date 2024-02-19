#include <iostream>

int main() {
    // Create an array 'arr' of integers with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};

    // Print the address of each element in the array using pointer arithmetic
    std::cout << "Addresses of elements in the array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Address of arr[" << i << "]: " << &arr[i] << std::endl;
    }

    // Increment a pointer to traverse the array and print each value
    std::cout << "\nValues of elements in the array:" << std::endl;
    int *ptr = arr; // Initialize pointer to the beginning of the array
    for (int i = 0; i < 5; ++i) {
        std::cout << "Value at arr[" << i << "]: " << *ptr << std::endl;
        ptr++; // Increment pointer to point to the next element in the array
    }

    return 0;
}
