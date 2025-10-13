# Intuition

To determine the type of triangle given its three sides, we first need to ensure that a valid triangle can be formed. The triangle inequality states that the sum of any two sides must be greater than the third. Once validity is confirmed, we can compare the sides to classify the triangle as *equilateral*, *isosceles*, or *scalene*.

# Approach

1. **Sort the sides** so that we can easily apply the triangle inequality: `a + b > c`.
2. **Check validity**:

   * If `a + b <= c`, the sides do not form a triangle, so return `"none"`.
3. **Check equality conditions**:

   * If all sides are equal, return `"equilateral"`.
   * If exactly two sides are equal, return `"isosceles"`.
   * Otherwise, return `"scalene"`.

# Complexity

* **Time complexity:**
  Sorting the three sides takes constant time, so the overall complexity is **O(1)**.
* **Space complexity:**
  We only use a few variables, so the space complexity is **O(1)**.

# Code

```python
class Solution:
    def triangleType(self, nums: List[int]) -> str:
        nums.sort()
        if nums[0] + nums[1] <= nums[2]:
            return "none"
        if nums[0] == nums[2]:
            return "equilateral"
        if nums[0] == nums[1] or nums[1] == nums[2]:
            return "isosceles"
        return "scalene"
```