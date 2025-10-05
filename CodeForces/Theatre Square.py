"""
CodeForces Problem A. - Theatre Square
Link: https://codeforces.com/problemset/problem/1/A
 
Problem: A theatre square is a rectangular area that needs to be paved with square flagstones.
The dimensions of the square are n x m, and the side length of each flagstone is a.
The goal is to determine the minimum number of flagstones required to cover the entire area.
 
Constraints: 1 ≤ n, m, a ≤ 10^9
"""
 
def required_flagstones(length: int, width: int, square: int) -> int:
    """
    This function calculates the minimum number of flagstones required to cover a rectangular area.
 
    Args:
        length (int): Length of the theatre square
        width (int): Width of the theatre square
        square (int): Side length of each flagstone

    Returns:
        int: Minimum number of flagstones required
 
    Logic:
        - Calculate the number of flagstones needed along the length (n) and width (m) of the square.
        - Since flagstones cannot be cut, if there is any remainder when dividing n or m by a, we need to round up to the next whole number.
        - Multiply the number of flagstones needed along the length by the number needed along the width to get the total number of flagstones required.
    """
    flagstones_per_row = -(-length // square) # Equivalent to math.ceil(length / square)
    flagstones_per_column = -(-width // square)
 
    return flagstones_per_column * flagstones_per_row
 
def main() -> None:
    """Main function to handle input/output."""
    n, m, a = map(int, input().split())
    flagstones = required_flagstones(n, m, a)
    print(flagstones)
 
if __name__ == "__main__":
    main()