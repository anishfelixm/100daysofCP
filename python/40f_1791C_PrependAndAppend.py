def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input().strip()
        j = 0
        while j < (n // 2):
            if (s[j] == "0" and s[n - 1 - j] == "0") or (s[j] == "1" and s[n - 1 - j] == "1"):
                break
            j += 1
        ans.append(n - 1 - j - j + 1)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()