def mcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def simplificar(den):
    while den % 2 == 0:
        den //= 2
    while den % 5 == 0:
        den //= 5
    return 1 if den == 1 else 0

def main():
    rep = int(input())
    for _ in range(rep):
        try:
            num, den = map(int, input().split())
            _mcd = mcd(num, den)
            num //= _mcd
            den //= _mcd
            print(simplificar(den))
        except EOFError:
            print(0)
        
if __name__ == "__main__":
    main()