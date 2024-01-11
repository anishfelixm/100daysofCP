def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        ind, max_b = 0, 0
        for i in range(n):
            a, b = input().split()
            a, b = int(a), int(b)
            if a <= 10:
                if b > max_b:
                    max_b = b
                    ind = i + 1
        ans.append(ind)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()