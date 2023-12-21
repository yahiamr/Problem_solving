
---

# Contains Duplicate Solutions

## Overview
This repository contains two C++ solutions for the "Contains Duplicate" problem from LeetCode, along with Catch test cases.

## Solution 1: Set Comparison
```cpp
bool containsDuplicate(vector<int>& nums) {
    return nums.size() > set<int>(nums.begin(), nums.end()).size();
}
```
- **Explanation**: This solution converts the vector into a set, which automatically removes duplicates. If the set's size is less than the vector's size, duplicates are present.

## Solution 2: Element Insertion in Set
```cpp
/*bool containsDuplicate(vector<int>& nums) {
    set<int> seen;
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}*/
```
- **Explanation**: This method iterates through the vector, inserting each element into a set. If an element is already in the set (i.e., a duplicate), it returns true.

## Test Cases
- **Duplicates Present**: Checks if the function correctly identifies vectors with duplicates.
- **No Duplicates**: Validates that the function returns false for vectors without duplicates.

---
