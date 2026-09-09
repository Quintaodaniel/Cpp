#include <iostream>

namespace Physics {
    double calculate_energy(double m, double v) {
        return m * (v * v) / 2;
    }
}

namespace Math {
    double calculate_energy(int base) {
        return base * base;
    }
}

int main() {
    double physics_result = Physics::calculate_energy(3.0, 4.0);
    double math_result = Math::calculate_energy(32);

    std::cout << "Physics Result: " << physics_result << "\nMath Result: " << math_result << "\n";
    return 0;
}