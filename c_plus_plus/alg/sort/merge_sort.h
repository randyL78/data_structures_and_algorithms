//
// Created by randy on 1/3/21.
//

#ifndef C_PLUS_PLUS_MERGE_SORT_H
#define C_PLUS_PLUS_MERGE_SORT_H

namespace alg
{
    namespace sort
    {
        template<typename Indexable>
        void merge(Indexable &a, Indexable &temp, int leftPos, int rightPos, int rightEnd)
        {
            int leftEnd = rightPos - 1;
            int tmpPos = leftPos;
            int numElements = rightEnd - leftPos + 1;

            while(leftPos <= leftEnd && rightPos <= rightEnd)
                if(a[leftPos] <= a[rightPos])
                    temp[tmpPos++] = std::move(a[leftPos++]);
                else
                    temp[tmpPos++] = std::move(a[rightPos++]);

            while(leftPos <= leftEnd)
                temp[tmpPos++] = std::move(a[leftPos++]);

            while (rightPos <= rightEnd)
                temp[tmpPos++] = std::move(a[rightPos++]);

            for(int i = 0; i < numElements; ++i, --rightEnd)
                a[rightEnd] = std::move(temp[rightEnd]);
        }

        template<typename Indexable>
        void merge_sort(Indexable &a, Indexable &temp, int left, int right)
        {
            if(left < right)
            {
                int center = (right + left) / 2;
                merge_sort(a, temp, left, center);
                merge_sort(a, temp, center + 1, right);
                merge(a, temp, left, center + 1, right);
            }
        }

        /**
         * Sorts the elements of an indexable container
         * @pre Indexable must respond to the [] operator
         *      Elements in Indexable must respond to <=
         * @tparam Indexable
         * @param c
         */
        template<typename Indexable>
        void merge_sort(Indexable &c) {
            Indexable tmpArray(c.size());
            merge_sort(c, tmpArray, 0, c.size()-1);
        }
    }
}

#endif //C_PLUS_PLUS_MERGE_SORT_H
