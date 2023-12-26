# Two Sum Problem Solution - README

## Introduction
The provided code snippet presents a solution to the classic "Two Sum" problem using C++. This problem is often encountered in coding interviews and competitive programming. The objective is to find indices of two numbers in an array such that they add up to a specific target number.

## Implementation Details

### Class: `Solution`
The core logic is encapsulated in the `Solution` class, which contains the method `twoSum`.

#### Method: `twoSum(vector<int>& nums, int target)`
- **Parameters**:
  - `nums`: A vector of integers representing the array of numbers.
  - `target`: The target sum we are trying to find.
- **Returns**: A vector of two integers representing the indices of the two numbers that add up to the target.

### Logic
1. **HashMap Creation**: An `unordered_multimap` is created to store the elements of the array. The key is the number itself, and the value is its index in the array. This allows for efficient retrieval of an element's index.
   
2. **Finding the Pair**: The method then iterates over the array, and for each element, it checks if there is another element in the map that, when added to the current element, equals the target sum. It ensures that the indices are not the same for both elements.

3. **Returning Indices**: Once a valid pair is found, the indices are added to a vector and returned.

4. **Edge Cases**: The method handles cases where no valid pairs are found by returning an empty vector.

### Example Test Cases
The code includes test cases using the Catch2 testing framework:
1. `Test Case 1`: Testing with an array `[2, 7, 11, 15]` and target `9`. Expected output: `[0, 1]`.
2. `Test Case 2`: Testing with an array `[3, 2, 4]` and target `6`. Expected output: `[1, 2]`.
3. `Test Case 3`: Testing with an array `[3, 3]` and target `6`. Expected output: `[1, 0]`.

## Usage
To use the solution:
1. Include the provided code in your C++ project.
2. Instantiate the `Solution` class.
3. Call the `twoSum` method with the required parameters.

## Conclusion
This C++ solution to the Two Sum problem demonstrates an efficient approach using hash maps for quick access and look-up, making it suitable for large datasets. The code is structured and includes test cases for validation, making it a reliable and easy-to-understand solution.