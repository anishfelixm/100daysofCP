from math import log2, pow
def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        k = int(pow(2, int(log2(n)))) - 1
        ans.append(k)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()