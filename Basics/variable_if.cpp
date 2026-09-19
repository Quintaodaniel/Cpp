#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x,y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    if (auto result = multiply(x, y); result > 0) {
        std::cout << "The product is positive: " << result << "\n";
    } else if (result < 0) {
        std::cout << "The product is negative: " << result << "\n";
    } else {
        std::cout << "The product is zero.\n";
    }

    return 0;
}