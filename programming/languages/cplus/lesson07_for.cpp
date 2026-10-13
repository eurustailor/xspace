#include <iostream>

// Программа читает неотрицательное целое число и печатает сумму чисел от 1 до него,
// а при неудачном чтении или отрицательном числе сообщает об ошибке.

int main() {
    std::cout << "Enter integer:\n";
    int n = 0;
    int sum = 0;
    if (std::cin >> n && n >= 0) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    } else {
        std::cerr << "fail\n";
        return 1;
    }
    std::cout << "sum = " << sum << '\n';
    return 0;
}