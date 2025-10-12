def solve() -> list[int]:
    n = int(input())
    b_list = list(map(int, input().split()))
    d_list = []
    a_list = []
    for i in range(n):
        if(i == 0):
            d_list.append(b_list[0])
            continue
        d_list.append(b_list[i] - b_list[i-1])

    next_label = 1
    for i in range(n):
        if(i == 0):
            a_list.append(next_label)
            next_label += 1
            continue

        if(d_list[i] == i+1):
            a_list.append(next_label)
            next_label += 1
        else:
            a_list.append(a_list[i - d_list[i]])
    return a_list

def print_list(a_list: list[int]) -> None:
    for i in a_list:
        print(i, end=" ")
    print()

def main() -> None:
    """Main function."""
    t = int(input())
    for _ in range(t):
        solution = solve()
        print_list(solution)

if __name__ == "__main__":
    main()
