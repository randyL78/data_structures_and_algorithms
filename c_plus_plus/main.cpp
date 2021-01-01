#include <iostream>

#include "adt.h"
#include "alg.h"

// create driver for different samples
int main() {
    adt::Vector<int> *numbers = new adt::Vector<int>();

    std::cout << "Size: " << numbers->size() << "\n";
    numbers->push_back(23);
    std::cout << "Size: " << (*numbers).size() << "\n";
    (*numbers).push_back(87);
    std::cout << "Size: " << numbers->size() << "\n";
    numbers->push_back(12);
    std::cout << "Size: " << numbers->size() << "\n";

    return 0;
}
