#include <iostream>

#include "adt.h"
#include "alg.h"
#include "utilities.h"

// create driver for different samples
int main() {
    adt::Vector<int> numbers;

    numbers.push_back(23);
    numbers.push_back(87);
    numbers.push_back(12);
    numbers.push_back(32);
    numbers.push_back(19);
    numbers.push_back(67);
    std::cout << "Size: " << numbers.size() << "\n";

    print(numbers);

    adt::Vector<int> numbers2;
    numbers2 = numbers;

    alg::sort::insertionSort(numbers);
    alg::sort::merge_sort(numbers2);

    print(numbers);
    print(numbers2);

    return 0;
}
