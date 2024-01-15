from math import ceil as ceil

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c = input().split()
        a, b, c = int(a), int(b), int(c)
        mid = (a + b) / 2
        ans.append(min(ceil(abs(a - mid) / c), ceil(abs(b - mid) / c)))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()