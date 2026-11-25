# DSA-CPP-Practice

A collection of 16 LeetCode Data Structures and Algorithms problems solved using C++.

## About
This repository contains practice solutions covering arrays, linked lists, stacks, queues, searching, two-pointer techniques, and matrix traversal. Each source file contains a LeetCode-style implementation, a short approach note, complexity analysis, and sample test cases.

> **Note:** These are LeetCode submission snippets. LeetCode supplies common definitions such as `ListNode` and the required headers. For local compilation, add the relevant headers and problem-specific node definitions or a `main()` function.

## Problems and approaches

| # | Problem | Main approach | Time | Extra space |
|---|---|---|---|---|
| 1 | Number of Steps to Reduce a Number to Zero | Loop and conditionals | O(log n) | O(1) |
| 2 | Binary Search | Binary search | O(log n) | O(1) |
| 3 | Search Insert Position | Binary search | O(log n) | O(1) |
| 4 | Move Zeroes | Two pointers and swapping | O(n) | O(1) |
| 5 | Linked List Cycle | Floyd's slow/fast pointers | O(n) | O(1) |
| 6 | Remove Linked List Elements | Linked-list pointer updates | O(n) | O(1) |
| 7 | Middle of the Linked List | Slow/fast pointers | O(n) | O(1) |
| 8 | Implement Stack Using Queues | One queue with rotation | Push O(n), others O(1) | O(n) |
| 9 | Intersection of Two Linked Lists | Two-pointer head switching | O(m+n) | O(1) |
| 10 | Remove Nth Node From End of List | Two pointers | O(n) | O(1) |
| 11 | Design Linked List | Self-defined singly linked nodes | O(n) per traversal operation | O(n) |
| 12 | Design Circular Deque | Fixed-size circular array | O(1) per operation | O(k) |
| 13 | Validate Stack Sequences | Stack simulation | O(n) | O(n) |
| 14 | Spiral Matrix | Four-boundary traversal | O(m*n) | O(1) extra, excluding output |
| 15 | Median of Two Sorted Arrays | Binary-search partition | O(log(min(m,n))) | O(1) |
| 16 | Trapping Rain Water | Two pointers and running maxima | O(n) | O(1) |

## Folder structure

```text
DSA-CPP-Practice/
├── Arrays/
│   ├── BinarySearch.cpp
│   ├── SearchInsertPosition.cpp
│   ├── MoveZeroes.cpp
│   ├── SpiralMatrix.cpp
│   ├── MedianOfTwoSortedArrays.cpp
│   └── TrappingRainWater.cpp
├── Basic/
│   └── NumberOfSteps.cpp
├── LinkedList/
│   ├── LinkedListCycle.cpp
│   ├── RemoveLinkedListElements.cpp
│   ├── MiddleOfLinkedList.cpp
│   ├── IntersectionOfTwoLinkedLists.cpp
│   ├── RemoveNthNodeFromEnd.cpp
│   └── DesignLinkedList.cpp
├── Queue/
│   └── DesignCircularDeque.cpp
├── Stack/
│   ├── ImplementStackUsingQueues.cpp
│   └── ValidateStackSequences.cpp
├── .gitignore
├── LICENSE
└── README.md
```

## Test cases

| Problem | Sample input | Expected result |
|---|---|---|
| Number of Steps | `14` | `6` |
| Binary Search | `nums=[1,3,5,7,9], target=5` | `2` |
| Search Insert Position | `nums=[1,3,5,6], target=2` | `1` |
| Move Zeroes | `[0,1,0,3,12]` | `[1,3,12,0,0]` |
| Linked List Cycle | `3 -> 2 -> 0 -> -4`, tail links to node at index 1 | `true` |
| Remove Linked List Elements | `1 -> 2 -> 6 -> 3`, value `6` | `1 -> 2 -> 3` |
| Middle of Linked List | `1 -> 2 -> 3 -> 4 -> 5` | Node `3` |
| Stack Using Queues | `push(1), push(2), top()` | `2` |
| Intersection of Two Linked Lists | Two lists share a node with value `8` | Shared node |
| Remove Nth Node | `1 -> 2 -> 3 -> 4 -> 5`, `n=2` | `1 -> 2 -> 3 -> 5` |
| Design Linked List | `addAtHead(1), addAtTail(3), addAtIndex(1,2), get(1)` | `2` |
| Circular Deque | Capacity `3`; insert last `1`, `2`, front `3` | All `true`; deque full |
| Validate Stack Sequences | pushed `[1,2,3,4,5]`, popped `[4,5,3,2,1]` | `true` |
| Spiral Matrix | `[[1,2,3],[4,5,6],[7,8,9]]` | `[1,2,3,6,9,8,7,4,5]` |
| Median of Two Sorted Arrays | `[1,2]` and `[3,4]` | `2.5` |
| Trapping Rain Water | `[0,1,0,2,1,0,1,3,2,1,2,1]` | `6` |

## Learning outcomes
- Practised implementing fundamental data structures in C++.
- Applied searching, sorting, traversal, and pointer techniques.
- Used stacks and queues to solve algorithmic problems.
- Analysed time and auxiliary-space complexity.
- Tested solutions with normal and edge-case inputs.

## Language
C++

## License
MIT License. See [LICENSE](LICENSE).
