"""
CodeForces Problem A. - Bit++
Link: https://codeforces.com/problemset/problem/231/A

Problem: Given a series of operations on a variable x, which starts at 0, determine the final value of x after performing all operations. 
Each operation is either "++X", "X++", "--X", or "X--", which respectively increment or decrement the value of x by 1.

Constraints: 1 ≤ n ≤ 150
"""

def operation_delta(operation: str) -> int:
    """
    Returns +1 for an increment operation and -1 for a decrement operation.

    Args:
        operation (str): The operation string ("++X", "X++", "--X", or "X--").

    Returns:
        int: 1 if increment, -1 if decrement.
    """
    return 1 if '+' in operation else -1


def main() -> None:
    """Read input, apply operations, and print the final value of x."""
    num_statements = int(input())
    x_value = 0

    for _ in range(num_statements):
        operation = input().strip()
        x_value += operation_delta(operation)
    
    print(x_value)


if __name__ == "__main__":
    main()
