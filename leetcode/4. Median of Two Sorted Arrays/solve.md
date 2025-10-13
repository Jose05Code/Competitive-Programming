
# Intuition

The problem asks for the median of two sorted arrays. My first thought is to combine both arrays and then find the middle element(s). Since both are already sorted, merging and then sorting the combined array will make it easy to compute the median directly.

# Approach

1. **Combine the arrays**: Concatenate `nums1` and `nums2` into a new list.
2. **Sort the combined array**: Sorting ensures the numbers are in ascending order.
3. **Find the median**:

   * If the total number of elements is odd, the median is the middle element.
   * If the total number of elements is even, the median is the average of the two middle elements.

Although this method is simple, it does not meet the optimal time complexity requirement for large datasets (which should be O(log (min(n, m))) for this problem), but it’s correct and easy to understand for smaller inputs.

# Complexity

* **Time complexity:**
  Sorting the combined list of size `n + m` takes **O((n + m) log (n + m))**.
* **Space complexity:**
  We create a new array of size `n + m`, so the space complexity is **O(n + m)**.

# Code

```python
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums3 = sorted(nums1 + nums2)
        size = len(nums3)
        if size % 2 == 0:
            return (nums3[size // 2] + nums3[size // 2 - 1]) / 2
        else:
            return nums3[size // 2]
```