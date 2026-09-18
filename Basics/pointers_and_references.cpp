/*
- Pointers and References
*/

#include <iostream>

void double_by_pointer(int* p) {
    if (p == nullptr) { // null pointer 
        std::cout << "Null pointer!\n";
        return;
    } 
    *p = *p * 2;
}

void double_by_reference(int& r) {
    r = r * 2;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int* null_ptr = nullptr;

    std::cout << "Number 1 [Before]: " << num1 << "\n";
    std::cout << "Number 2 [Before]: " << num2 << "\n";

    double_by_pointer(null_ptr); // if test

    double_by_pointer(&num1);
    double_by_reference(num2);
    std::cout << "Number 1 [After doubling by pointer]:" << num1 << "\n";
    std::cout << "Number 2 [After doubling by reference]:" << num2 << "\n";

    return 0;
}