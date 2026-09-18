/*
- List Initialization
- Type deduction with auto
*/

#include <iostream>

int main() {
    int x = 7.9; // Truncates to 7
    std::cout << "Value of x (with '='): " << x << "\n\n";

    //int y{7.2}; --> error: narrowing conversion of '7.2000000000000002e+0' from 'double' to 'int'
    int y{7};
    std::cout << "Value of y (with '{}'): " << y << "\n\n";

    auto a = 5;     // int
    auto b = 3.14;  // double
    auto c = 'z';   // char
    auto d = true;  // bool

    std::cout << "--- Size of auto types ---\n";
    std::cout << "sizeof(a) [int]:    " << sizeof(a) << " byte(s)\n";
    std::cout << "sizeof(b) [double]: " << sizeof(b) << " byte(s)\n";
    std::cout << "sizeof(c) [char]:   " << sizeof(c) << " byte(s)\n";
    std::cout << "sizeof(d) [bool]:   " << sizeof(d) << " byte(s)\n";

    return 0;
}