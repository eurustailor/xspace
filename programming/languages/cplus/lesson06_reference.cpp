#include <iostream>

// Программа читает два целых числа, печатает их, меняет местами и печатает снова, а при неудачном чтении сообщает об ошибке.

void swap_values(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
    int a = 0;
    int b = 0;
    std::cout << "Enter two integers:\n";
    if (std::cin >> a >> b) {
        std::cout << "before swap: a = " << a << ", b = " << b << '\n';
        swap_values(a, b);
        std::cout << "after swap: a = " << a << ", b = " << b << '\n';
    } else {
        std::cerr << "fail\n";
        return 1;
    }
    return 0;
}