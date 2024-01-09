def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = input().strip()
        b = input().strip()
        flag = 0
        for i in range(n):
            if (a[i] == "R" and b [i] != "R") or (b[i] == "R" and a[i] != "R"):
                flag = 1
                break
        if flag == 0:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()