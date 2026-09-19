#include <iostream>

template <size_t N>
void print_array(const int (&arr)[N]) {
    std::cout << "[ ";
    for (const auto& element : arr) { 
        std::cout << element << " ";
    }
    std::cout << "]\n";
}

int main() {
    int values[] = {10, 20, 30, 40, 50};

    std::cout << "Original array: ";
    print_array(values);
    std::cout << "\n";

    std::cout << "--- Executing range-for by COPY (auto x : values) ---\n";
    for (auto x : values) {
        x += 5;
    }

    std::cout << "Array after the first loop (nothing changed): ";
    print_array(values);
    std::cout << "\n";

    std::cout << "--- Executing range-for by REFERENCE (auto& x : values) ---\n";
    for (auto& x : values) {
        x += 5;
    }

    std::cout << "Array after the second loop (values changed): ";
    print_array(values);

    return 0;
}