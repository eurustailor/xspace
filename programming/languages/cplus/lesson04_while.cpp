#include <iostream>

// Программа читает целые числа, пока они приходят, и в конце печатает, сколько чисел было и какая у них сумма.

int main() {
    std::cout << "Enter integers:\n";

    int value = 0;
    int sum = 0;
    int count = 0;
    while (std::cin >> value) {
        sum += value;
        count += 1;
    }

    std::cout << "count = " << count << '\n';
    std::cout << "sum = " << sum << '\n';
    return 0;
}