from math import ceil

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        ans.append(ceil(n / 2))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()