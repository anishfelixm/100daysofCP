def main():
    t = int(input())
    ans = []
    for _ in range(t):
        s = input().strip()
        n = int(s[0]) + int(s[1]) + int(s[2])
        m = int(s[3]) + int(s[4]) + int(s[5])
        if n == m:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ =="__main__":
    main()