#include <iostream>
#include <algorithm>
#include <numeric>

// Функція для знаходження максимуму
int maxFunc(int* arr, int size) {
    return *std::max_element(arr, arr + size);
}

// Функція для знаходження мінімуму
int minFunc(int* arr, int size) {
    return *std::min_element(arr, arr + size);
}

// Функція для знаходження середнього значення
double avgFunc(int* arr, int size) {
    return static_cast<double>(std::accumulate(arr, arr + size, 0)) / size;
}

// Функція Action
template <typename Func>
auto Action(int* A, int* B, int sizeA, int sizeB, Func func) {
    auto resultA = func(A, sizeA);
    auto resultB = func(B, sizeB);
    return std::make_pair(resultA, resultB);
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {6, 7, 8, 9, 10};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    std::cout << "Select an option: max, min, avg" << std::endl;
    std::string choice;
    std::cin >> choice;

    if (choice == "max") {
        auto result = Action(A, B, sizeA, sizeB, maxFunc);
        std::cout << "Max of A: " << result.first << ", Max of B: " << result.second << std::endl;
    } else if (choice == "min") {
        auto result = Action(A, B, sizeA, sizeB, minFunc);
        std::cout << "Min of A: " << result.first << ", Min of B: " << result.second << std::endl;
    } else if (choice == "avg") {
        auto result = Action(A, B, sizeA, sizeB, avgFunc);
        std::cout << "Avg of A: " << result.first << ", Avg of B: " << result.second << std::endl;
    } else {
        std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}
