from math import pow as pow

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a, b = 0, 0
        for i in range(1, n // 2):
            a += pow(2,i)
            b += pow(2, n - i)
        a += pow(2, n)
        b += pow(2, n//2)
        ans.append(int(abs(a - b)))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()