"""
CodeForces Problem 71A - Way Too Long Words
Link: https://codeforces.com/problemset/problem/71/A

Problem: Given a list of words, abbreviate those longer than 10 characters.

Constraints: 1 ≤ n ≤ 100, 1 ≤ length of each word ≤ 100
"""

def abbreviate_word(word: str) -> str:
    """
    Abbreviates a word if its length is greater than 10 characters.
    Args:
        word (str): The word to be abbreviated
    Returns:
        str: The abbreviated word
    Logic:
        Return the first character + number of characters in between + last character.
    """
    abbreviation = ""
    abbreviation += word[0] # First character
    abbreviation += str(len(word) - 2) # Number of characters between first and last
    abbreviation += word[-1] # Last character
    return abbreviation

def main() -> None:
    """Main function to handle input/output."""
    n = int(input().strip())
    for _ in range(n):
        word = input().strip()
        if len(word) > 10:
            print(abbreviate_word(word))
        else:
            print(word)

if __name__ == "__main__":
    main()