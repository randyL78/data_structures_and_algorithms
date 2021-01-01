#include <iostream>

#include "Vector.h"


// create driver for different samples
int main() {
    Vector<int> *numbers = new Vector<int>();

    std::cout << "Size: " << numbers->size() << "\n";
    numbers->push_back(23);
    std::cout << "Size: " << (*numbers).size() << "\n";
    (*numbers).push_back(87);
    std::cout << "Size: " << numbers->size() << "\n";
    numbers->push_back(12);
    std::cout << "Size: " << numbers->size() << "\n";

    return 0;
}
