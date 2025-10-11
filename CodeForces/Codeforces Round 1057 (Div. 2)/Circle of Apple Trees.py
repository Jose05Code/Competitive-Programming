def solve() -> int:
    n = int(input())
    b = set(map(int, input().split()))
    return len(b)

def main() -> None:
    """Main function."""
    t  = int(input())
    for _ in range(t):
        result = solve()
        print(result)

if __name__ == "__main__":
    main()
