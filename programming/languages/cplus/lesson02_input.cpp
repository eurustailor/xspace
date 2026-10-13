#include <iostream>

// Программа читает два целых числа и выводит результат их сложения.

int main() {
    std::cout << "Enter two integers:\n";

    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    std::cout << "a + b = " << a + b << '\n';
    return 0;
}
