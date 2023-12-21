# README: Intuitive Explanation for Anagram Detection Using HashMap

## Overview
This solution to the anagram problem in C++ employs a hashmap to efficiently track the frequency of characters in two strings, determining if they are anagrams of each other.

## Functionality
```cpp
bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    unordered_map<char, int> charCount;
    for(char c : s) charCount[c]++;
    for(char c : t) {
        if (charCount.find(c) == charCount.end() || --charCount[c] < 0)
            return false;
    }
    return true;
}
```
- **Intuition Behind the Solution**:
    - **Equality of Lengths**: Anagrams must have the same number of characters. Immediate length comparison is a quick way to rule out non-anagrams.
    - **HashMap for Frequency Counting**: A hashmap (`unordered_map`) is used to count each character in the first string. This data structure allows for fast access and update of character counts.
    - **Character Verification**: When iterating through the second string, the function decreases the count of each character. If a character in the second string is not found in the hashmap or if its count drops below zero, it indicates a mismatch in character frequency, confirming that the strings are not anagrams.

## Test Cases
- **Anagrams**: Confirms true for anagram pairs.
- **Not Anagrams**: Ensures false for strings that are not anagrams.
- **Different Lengths**: Validates false for strings of different lengths.

This README aims to provide a clear understanding of the anagram detection methodology using a hashmap.