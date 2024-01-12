def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, m = input().split()
        n, m = int(n), int(m)
        if n % 2 == 0 :
            ans.append(m * (n // 2))
        elif m % 2 == 0:
            ans.append(n * (m // 2))
        else:
            ans.append(((n // 2)+ 1) + ((m - 1) // 2) * n)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()