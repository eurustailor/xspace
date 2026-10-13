#include <iostream>

// Программа должна прочитать 2 целых числа и заметить, что чтение не удалось.

int main() {
    std::cout << "Enter two integers:\n";

    int a = 0;
    int b = 0;
    if (std::cin >> a >> b) {
        std::cout << a + b << '\n';
        std::cout << a - b << '\n';
        std::cout << a * b << '\n';
    } else {
        std::cerr << "fail\n";
        return 1;
    }
    return 0;
}