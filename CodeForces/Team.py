"""
CodeForces Problem A. - Team
Link: https://codeforces.com/problemset/problem/231/A

Problem: A team is defined as a set of three students who all attend the same classes. 
Given a list of students and the classes they attend, determine the number of teams that can be formed.

Constraints: 1 ≤ n ≤ 1000
"""

def are_they_sure(petya: bool, vasya: bool, tonya: bool) -> bool:
    """
    Returns True if at least two team members are sure about the solution.

    Args:
        petya (bool): Petya's confidence
        vasya (bool): Vasya's confidence
        tonya (bool): Tonya's confidence

    Returns:
        bool: True if at least two are sure, False otherwise
    """
    return sum((petya, vasya, tonya)) >= 2


def main() -> None:
    """Main function to handle input/output."""
    number_of_problems = int(input())
    implemented_problems = 0

    for _ in range(number_of_problems):
        petya, vasya, tonya = map(int, input().split()) # Read the input line and split it into three integers
        if are_they_sure(bool(petya), bool(vasya), bool(tonya)): 
            implemented_problems += 1

    print(implemented_problems)

if __name__ == "__main__":
    main()
    
    