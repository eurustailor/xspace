#include <iostream>

// Программа читает пять целых чисел и печатает их в обратном порядке, а при неудачном чтении сообщает об ошибке.

int main() {
    int array[5]{};
    int a = 0;
    for (int i = 0; i <= 4; i++) {
        if (std::cin >> a) {
            array[i] = a;
        } else {
            std::cerr << "fail\n";
            return 1;
        }
    }
    for (int i = 4; i >= 0; i--) {
        std::cout << array[i] << '\n';
    }
    return 0;
}