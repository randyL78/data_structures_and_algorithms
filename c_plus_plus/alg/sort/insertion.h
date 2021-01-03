//
// Created by randy on 1/1/21.
//

#ifndef C_PLUS_PLUS_INSERTION_H
#define C_PLUS_PLUS_INSERTION_H

namespace alg
{
    namespace sort {
        template<typename Iterator, typename Comparator>
        void insertionSort(const Iterator &begin,
                           const Iterator &end,
                           Comparator lessThan) {
            if (begin == end) return;

            Iterator i;

            for (Iterator p = begin + 1; p != end; ++p) {
                auto temp = std::move(*p);

                for (i = p; i != begin && lessThan(temp, *(i - 1)); --i)
                    *i = std::move(*(i - 1));

                *i = std::move(temp);
            }
        }

        template<typename Iterator>
        void insertionSort(const Iterator &begin, const Iterator &end) {
            insertionSort(begin, end, std::less<decltype(*begin)>{});
        }
    }
}

#endif //C_PLUS_PLUS_INSERTION_H
