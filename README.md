# Difference Array Technique

This repository is dedicated to explaining the **Difference Array Technique** using two LeetCode problems: **LeetCode 370: Range Addition** and **LeetCode 2381: Shifting Letters**. 
The solutions are implemented using this technique, and the detailed explanation of the method is provided below.

## Difference Array Technique

The **Difference Array Technique** is a very efficient method used to apply range updates on an array. Instead of directly modifying the entire range for each update, we record the changes only at the boundaries of the range. This allows us to apply updates in constant time, and then compute the final values in a linear pass.

### How the Difference Array Technique Works

1. **Initial Setup:**
   - We start with an array initialized to zero, and a difference array (`diff`) of the same size with all values set to zero.
   
2. **Apply Range Updates:**
   - For a given operation that updates the subarray between indices `i` and `j` by a value `val`, we:
     - Increment `diff[i]` by `val` (to mark the start of the update).
     - Decrement `diff[j + 1]` by `val` (to mark the end of the update, ensuring that the value stops propagating beyond index `j`).

3. **Compute Final Array:**
   - To obtain the final array after all updates, we compute the prefix sum of the difference array. This step gives us the cumulative effect of all the range updates, producing the modified array.

### Example: LeetCode 370: Range Addition

**Problem Statement:**

You are given an array of length `n` initialized with all 0's, and you are provided with `k` update operations. Each operation is represented by a triplet `[startIndex, endIndex, inc]`, which means incrementing each element of the subarray `A[startIndex ... endIndex]` (inclusive) by `inc`. The goal is to return the modified array after all operations are applied.

**Example:**

Input:
length = 5 updates = [[1, 3, 2], [2, 4, 3], [0, 2, -2]]
Output: [-2, 0, 3, 5, 3]


### Explanation of the Example:

- **Initial state:**
[0, 0, 0, 0, 0]


- **After applying operation [1, 3, 2]:**
[0, 2, 2, 2, 0]


- **After applying operation [2, 4, 3]:**
[0, 2, 5, 5, 3]


- **After applying operation [0, 2, -2]:**
[-2, 0, 3, 5, 3]


### LeetCode 2381: Shifting Letters

In addition to LeetCode 370, we also have another problem that uses the **Difference Array Technique**: **LeetCode 2381: Shifting Letters**.

In **LeetCode 2381**, the task is to perform a series of range shift operations on a string, where each operation shifts a subset of letters in the string by a certain number of places. The solution to this problem is also based on the difference array technique.

You can find the solution to **LeetCode 2381** in the `LeetCode-2381.cpp` file in this repository.

### Conclusion

The **Difference Array Technique** is a highly efficient method for applying multiple range updates to an array. It is particularly useful when there are a large number of range updates, as it reduces the time complexity of each update from O(n) to O(1). After applying all updates, the final array can be computed in a single pass through the difference array.

In this repository, we have provided two examples of problems from LeetCode where this technique is applied:

1. **LeetCode 370: Range Addition** — Explained and implemented in `LeetCode-370.cpp`.
2. **LeetCode 2381: Shifting Letters** — Implemented in `LeetCode-2381.cpp`.

Feel free to explore the solutions and the explanation to better understand the difference array technique!

### License

This repository is open for educational purposes. Feel free to contribute, fork, or improve the solutions as needed.


