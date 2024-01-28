from math import sqrt, cbrt

def solve(n):
    return int(sqrt(n)) + int(cbrt(n)) - int(sqrt(cbrt(n)))

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        m = int(input())
        ans.append(solve(m))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()