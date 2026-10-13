#include <iostream>

// Программа читает два целых числа и печатает большее из них, а при неудачном чтении сообщает об ошибке.

int larger(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    std::cout << "Enter two integers:\n";

    int a = 0;
    int b = 0;
    if (std::cin >> a >> b) {
        std::cout << "max = " << larger(a, b) << '\n';
    } else {
        std::cerr << "fail\n";
        return 1;
    }
    return 0;
}