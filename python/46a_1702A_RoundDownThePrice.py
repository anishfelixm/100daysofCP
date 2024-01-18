from math import pow, log10, floor

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        m = int(input())
        ans.append(m - int(pow(10, floor(log10(m)))))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()