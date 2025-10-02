"""
CodeForces Problem 4A - Watermelon
Link: https://codeforces.com/problemset/problem/4/A

Problem: Divide a watermelon of weight w into exactly two parts 
such that both parts have even weight.

Constraints: 1 ≤ w ≤ 100
"""


def can_divide_watermelon(weight: int) -> str:
    """
    Determines if a watermelon can be divided into two parts with even weights.
    
    Args:
        weight (int): The weight of the watermelon
        
    Returns:
        str: "YES" if divisible into two even parts, "NO" otherwise
        
    Logic:
        - Weight must be even (sum of two even numbers is even)
        - Weight must be > 2 (smallest case: 4 = 2 + 2)
        - Weight = 2 can only be split as 1 + 1, but 1 is odd
    """
    return "YES" if weight > 2 and weight % 2 == 0 else "NO"


def main() -> None:
    """Main function to handle input/output."""
    weight = int(input().strip())
    result = can_divide_watermelon(weight)
    print(result)


if __name__ == "__main__":
    main()