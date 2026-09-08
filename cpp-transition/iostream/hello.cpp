#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, World!\n";
    std::cout << "Enter your name: ";

    std::string name;
    std::getline(std::cin, name);

    std::cout << "Welcome to Modern C++, " << name << "!\n";

    return 0;
}