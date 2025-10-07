"""
CodeForces Problem A. - Next Round
Link: https://codeforces.com/problemset/problem/158/A

Problem: Given the scores of n participants in a competition,
 determine how many participants will advance to the next round.

Constraints: 1 ≤ n ≤ 150
"""

def count_advancing_participants(n: int, k: int, scores: list[int]) -> int:
    """
    This function counts how many participants will advance to the next round.

    Args:
        n (int): Total number of participants
        k (int): The k-th place score threshold
        scores (list[int]): List of scores of the participants

    Returns:
        int: Number of participants advancing to the next round

    Logic:
        - The k-th place score is determined by the score of the participant in the k-th position.
        - A participant advances if their score is greater than or equal to the k-th place score and is greater than 0.
    """
    if k > n or k <= 0:
        return 0
    
    kth_score = scores[k - 1]
    advancing_count = sum(1 for score in scores if score >= kth_score and score > 0)
    
    return advancing_count

def main() -> None:
    """Main function to handle input/output."""
    n, k = map(int, input().split())
    scores = list(map(int, input().split()))
    result = count_advancing_participants(n, k, scores)
    print(result)

if __name__ == "__main__":
    main()
    
   