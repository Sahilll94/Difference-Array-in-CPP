# Difference Array

The instance of Difference array is **LeetCode 370: Range Addition** problem, which is only available to premium users on LeetCode. The solution is implemented using the **Difference Array Technique** and is provided in the `main.cpp` file.

## Problem Statement
The problem involves performing several range updates on an array. Each update consists of adding a value to all elements between indices `i` and `j` (inclusive). After applying all the updates, the task is to return the final array.

For more details, you can check the problem description on [LeetCode 370](https://leetcode.ca/all/370.html).

## Difference Array Technique

The **Difference Array Technique** is a powerful and efficient way to apply multiple range updates on an array in constant time. Instead of updating all elements in the range, we keep track of the changes at the start and end of the range using a **difference array**.

### How It Works

1. **Initial Setup:** 
   We start by initializing a difference array `diff` of size `n + 1` (where `n` is the size of the original array) and set all values to 0.

2. **Apply Updates:**
   For each range update `(i, j, val)`:
   - Increment `diff[i]` by `val`.
   - Decrement `diff[j + 1]` by `val` (if `j + 1` is within bounds).

3. **Final Array:**
   To obtain the final array after all updates, we compute the prefix sum of the difference array. This allows us to reconstruct the array efficiently.

### Time Complexity
- The time complexity for applying each update is **O(1)**.
- The time complexity for computing the final array is **O(n)**, where `n` is the size of the array.

This technique is particularly useful when we have multiple range updates to apply, making it much more efficient than directly updating each element in the range.

## Solution

The solution to the problem is provided in the `main.cpp` file. The code uses the Difference Array Technique to efficiently apply all the range updates and compute the final result.

### Steps:
1. Create a difference array `diff` of size `n + 1`.
2. For each update, modify the difference array.
3. Compute the prefix sum of the difference array to obtain the final result.
