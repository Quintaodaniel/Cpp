/*
- Input and output streams with std::cout and std::cin
- buffer handling
- Use of namespaces
- Function overloading
*/

#include <iostream>
#include <limits>

void print_data(int num) {
    std::cout << "\nInteger: " << num;
}

void print_data(double num) {
    std::cout << "\nDouble: " << num;
}

int main() {
    int num_int;
    double num_double;

    std::cout << "Enter an integer number: ";
    // Fails if it does not read an int or if the next character is not Enter
    while (!(std::cin >> num_int) || std::cin.peek() != '\n') {
        std::cout << "Invalid input! Enter only integer numbers: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Buffer
    }

    std::cout << "Enter a double number (use dot for the decimal point): ";
    // Fails if it does not read a double or if the next character is not Enter
    while (!(std::cin >> num_double) || std::cin.peek() != '\n') {
        std::cout << "Invalid input! Enter a valid double number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Buffer
    }

    std::cout << "\n--- Results ---\n";

    print_data(num_int);
    print_data(num_double);

    return 0;
}