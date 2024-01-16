def main():
    ans = []
    t = int(input())
    for _ in range(t):
        s = input().strip()
        c = input()
        if len(s) == 2:
            ans.append("NO")
        else:
            flag = 0
            for i in range(len(s)):
                if s[i] == c and i % 2 == 0:
                    flag = 1
                    break
            if flag == 1:
                ans.append("YES")
            else:
                ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()