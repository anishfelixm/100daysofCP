from math import sqrt
def main():
    cnt = 0
    n, m = input().split()
    n, m = int(n), int(m)
    for a in range(0, int(sqrt(n)) + 1):
        for b in range(0, int(sqrt(m)) + 1):
            if a * a + b == n and a + b * b == m:
                cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()