#include <iostream>
#include <array>
#include <algorithm>

void swapMinMax(std::array<double, 10> &arr) { // Вказуємо розмір як 10, ви можете вибрати відповідний розмір
    auto min_it = std::min_element(arr.begin(), arr.end());
    auto max_it = std::max_element(arr.begin(), arr.end());
    std::swap(*min_it, *max_it);
}

int main() {
    const int n = 10; // Розмір масиву
    std::array<double, n> arr;

    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    swapMinMax(arr);

    std::cout << "Масив після заміни місцями найбільшого і найменшого елементів:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
