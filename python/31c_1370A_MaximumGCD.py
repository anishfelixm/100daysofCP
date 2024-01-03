def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n % 2 == 0:
            ans.append((n // 2))
        else:
            ans.append(((n-1) // 2))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()