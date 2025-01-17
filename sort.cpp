#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Sorting in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Display sorted array
    std::cout << "Sorted in ascending order: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sorting in descending order
    std::sort(numbers.rbegin(), numbers.rend());

    // Display sorted array
    std::cout << "Sorted in descending order: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
