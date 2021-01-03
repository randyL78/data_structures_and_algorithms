//
// Created by randy on 1/3/21.
//

#ifndef C_PLUS_PLUS_UTILITIES_H
#define C_PLUS_PLUS_UTILITIES_H

template<typename Container>
void print(Container & c, std::ostream &out = std::cout)
{
    if(c.empty()) {
        out << "(empty)\n";
        return;
    }

    auto itr = std::begin(c);
    out << "[ " << *itr++;

    while (itr != std::end(c))
        out << ", " << *itr++;

    out << " ]\n";
}

template<typename Iterator>
void print(const Iterator & begin, const Iterator & end)
{
    std::cout << "[ " << *begin;
    for (Iterator i = begin + 1; i != end; ++i)
    {
        std::cout << ", " << *i;
    }
    std::cout << " ]\n";
}

#endif //C_PLUS_PLUS_UTILITIES_H
