def main():
    cnt = 0
    n = int(input())
    s = input().strip()
    for i in range(2, n):
        if s[i] == "x" and s[i-1] == "x" and s[i - 2] == "x":
            cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()