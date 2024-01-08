def main():
    ans = []
    check = "codeforces"
    t = int(input())
    for _ in range(t):
        s = input().strip()
        cnt = 0
        for i in range(10):
            if s[i] != check[i]:
                cnt += 1
        ans.append(cnt)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()