"""
CodeForces Problem A. - Domino piling
Link: https://codeforces.com/problemset/problem/50/A

Problem: Given the dimensions of a rectangular board (length and width), determine the maximum number of 2x1 domino pieces that can be placed on the board without overlapping.

Constraints: 1 ≤ n, m ≤ 16
"""

def domino_piling(length: int, width: int) -> int:
    """
    Calculate the maximum number of 2x1 domino pieces that can fit on a board of given dimensions.

    Args:
        length (int): The length of the board.
        width (int): The width of the board.

    Returns:
        int: The maximum number of domino pieces that can fit on the board.

    Logic:
        - No matter how the dominoes are arranged, each domino covers 2 squares.
        - The total number of squares on the board is length * width.
        - Therefore, the maximum number of dominoes that can fit is (length * width) // 2.
    """
    area = length * width
    domino_pieces = area // 2
    return domino_pieces

def main() -> None:
    """Main function to handle input/output."""
    M, N = map(int, input().split())
    result = domino_piling(N,M)
    print(result)

if __name__ == "__main__":
    main()