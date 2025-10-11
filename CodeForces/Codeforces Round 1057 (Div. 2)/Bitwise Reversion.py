def solve() -> str:
    a, b, c = map(int, input().split())

    while a or b or c:
        a_bit = a&1
        b_bit = b&1
        c_bit = c&1
        a >>= 1
        b >>= 1
        c >>= 1
        if a_bit + b_bit + c_bit == 2:
            return "NO"
    return "YES"
 
 
 
def main() -> None:
    """Main function."""
    t  = int(input())
    for _ in range(t):
        result = solve()
        print(result)
 
if __name__ == "__main__":
    main()
