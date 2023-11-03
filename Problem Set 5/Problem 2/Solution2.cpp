#include <iostream>
#include <string>
#include <type_traits>

template <typename T>
T doubling(T a) {
    if constexpr (std::is_same<T, std::string>::value) {
        return a + a;  // Concatenate the string
    } else {
        return a * a;  // Square for numeric types
    }
}

int main() {
    std::string str = "Atharv";
    int num = 5;

    std::cout << doubling(str) << std::endl;  // Outputs "AtharvAtharv" (string concatenation)
    std::cout << doubling(num) << std::endl;  // Outputs "25" (squared numeric value)

    return 0;
}
