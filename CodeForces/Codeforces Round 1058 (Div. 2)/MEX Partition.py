def solve() -> int:
    n = int(input())
    A_set = set(map(int, input().split()))
    min_Value = 0
    for i in A_set:
        if i == min_Value:
            min_Value += 1
    return min_Value

def main() -> None:
    """Main function."""
    t = int(input())
    for _ in range(t):
        solution = solve()
        print(solution)

if __name__ == "__main__":
    main()