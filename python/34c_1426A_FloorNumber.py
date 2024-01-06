from math import ceil

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, x = input().split()
        n, x = int(n), int(x)
        result = 1
        if n > 2:
            result = ceil((n - 2) / x) + 1
        ans.append(result)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()