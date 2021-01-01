[Home](../../README.md)>>Sorting>>[Insertion Sort](README.md)

# Insertion Sort

## Design and Analysis

## Algorithm

Taken from [Introduction to Algorithms, 3rd Edition](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844/ref=sr_1_1?crid=2DWO8YZNE0J1E&dchild=1&keywords=introduction+to+algorithms&qid=1609542539&sprefix=Intro%2Caps%2C176&sr=8-1) by Thomas H. Cormen, et al.

### Input

A sequence of _n_ numbers _{a<sub>1</sub>, a<sub>2</sub> ... a<sub>n</sub>}_

### Output

A permutation _{a'<sub>1</sub>, a'<sub>2</sub> ... a'<sub>n</sub>}_ such that _a'<sub>1</sub> &leq; a'<sub>2</sub> &leq; ... &leq; a'<sub>n</sub>_

### Pseudocode

```C++
for j = 2 to A.length
  key = A[j]
  // Insert A[j] into the sorted sequence A[1..j - 1]
  i = j - 1
  while i > 0 and A[i] > key
    A[i + 1] = A[i]
    i = i - 1
  A[i + 1] = key
```

## Implementations

* [C++]()