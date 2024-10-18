#include <iostream>

// Function to sum elements of arrays A and B and store in array C
void sumArrays(const int* A, const int* B, int* C, int size) {
    for (int i = 0; i < size; ++i) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    const int size = 5;
    int A[size] = {1, 2, 3, 4, 5};
    int B[size] = {6, 7, 8, 9, 10};
    int C[size];

    // Call the function to sum arrays
    sumArrays(A, B, C, size);

    // Print the result
    std::cout << "Array C: ";
    for (int i = 0; i < size; ++i) {
        std::cout << C[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
