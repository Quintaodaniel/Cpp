/*
- Practical difference between const and constexpr
*/

#include <iostream>
#include <iostream>

constexpr double celsius_to_fahrenheit(double c) {
    return (c * 1.8) + 32;
}

int main() {
    constexpr double freezing = celsius_to_fahrenheit(0.0); // compile-time constant

    std::cout << "Enter a temperature in Celsius: ";
    
    double temp_user;
    while (!(std::cin >> temp_user) || std::cin.peek() != '\n') {
        std::cout << "Invalid temperature, enter again: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // constexpr double f_user = celsius_to_fahrenheit(temp_user); --> the value of variable "temp_user" (declared at line 13) cannot be used as a constant
    const double f_user = celsius_to_fahrenheit(temp_user); // runtime constant

    std::cout << "[constexpr]: " << freezing << "\n";
    std::cout << "[const]: " << f_user << "\n";

    return 0;
}