[Home](../../README.md)>>Sorting>>[Merge Sort](README.md)


# Merge Sort

## Design and Analysis

## Algorithm

Taken from [Introduction to Algorithms, 3rd Edition](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844/ref=sr_1_1?crid=2DWO8YZNE0J1E&dchild=1&keywords=introduction+to+algorithms&qid=1609542539&sprefix=Intro%2Caps%2C176&sr=8-1) by Thomas H. Cormen, et al.

### Input

A sequence of _n_ numbers _{a<sub>1</sub>, a<sub>2</sub> ... a<sub>n</sub>}_

### Output

A permutation _{a'<sub>1</sub>, a'<sub>2</sub> ... a'<sub>n</sub>}_ such that _a'<sub>1</sub> &leq; a'<sub>2</sub> &leq; ... &leq; a'<sub>n</sub>_

### Pseudocode

Merge sort requires two algorithms, `Merge Sort` which is a recursive divide and conquer 
algorithm for the sorting aspect, and `Merge` which is used to combine the two sorted halves
of a list into a single sorted list.

Merge Sort

```C++
// A = array or list to sort
// p = the leftmost index of the array
// r = the rightmost index of the array
if p < r
  q = floor((p + r / 2))
  MERGE-SORT(A, p, q)
  MERGE-SORT(A, q + 1, r)
  MERGE(A, p, q, r)
```

Merge

```c++
// A = array or list to sort
// p, q, r = indices in the list such that p <= q < r
n1 = q - p + 1
n2 = r - q
let L[1..n1 + 1] and R[1..n2 + 1] be new arrays
for i = 1 to n1
  L[i] = A[p + i - 1]
for j = 1 to n2
  R[j] = A[q + j]        
L[n1 + 1] = sentinel
R[n2 + 1] = sentinel
i = 1
j = 1
for k = p to r
  if L[i] <= R[j]
    A[k] = L[i]
    i = i + 1
  else
    A[k] = R[j]
    j = j + 1        
```


## Implementations

* [C++]()