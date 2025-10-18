def B_average(li: list) -> int:
    maximum = max(li)
    return maximum

def get_input() -> list:
    li = list(map(int, input().split()))
    return li

def main() -> None:
    t = int(input())
    while(t):
        n = int(input())
        li = get_input()
        res = B_average(li)
        print(res)
        
        t-=1


if __name__ == "__main__":
    main()