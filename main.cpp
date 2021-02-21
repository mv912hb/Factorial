#include <iostream>

using namespace std;

int factorial (int);

int main() {
    int b;
    cout << "Введите число: ";
    cin >> b;
    int result = factorial(b);
    std::cout << "Факториал числа " << b << " равен " << result << std::endl;
    return 0;
}

int factorial (int n) {
    if (n > 1)
        return n * factorial(n-1);
    return 1;
}
