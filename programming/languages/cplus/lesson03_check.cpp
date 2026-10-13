#include <iostream>

// Программа читает два целых числа. 
// При успехе печатает сумму, разность и произведение,
// иначе сообщает об ошибке и завершается с кодом 1.

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