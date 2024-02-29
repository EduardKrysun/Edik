#include <iostream>
#include <algorithm>

void swapMinMax(double *arr, int size) {
    if (size <= 0) // перевірка невідповідного розміру масиву
        return;

    double *min_it = std::min_element(arr, arr + size);
    double *max_it = std::max_element(arr, arr + size);
    std::swap(*min_it, *max_it);
}

int main() {
    int n;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> n;

    if (n <= 0) { // перевірка невідповідного розміру масиву
        std::cerr << "Розмір масиву повинен бути більше 0." << std::endl;
        return 1;
    }

    double *arr = new double[n];

    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    swapMinMax(arr, n);

    std::cout << "Масив після заміни місцями найбільшого і найменшого елементів:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr; // важливо звільнити пам'ять

    return 0;
}
