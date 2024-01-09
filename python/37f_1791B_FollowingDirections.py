def main():
    ans = []
    hmapx = {"L" : -1, "R" : 1, "U" : 0, "D" : 0}
    hmapy = {"L" : 0, "R" : 0, "U" : 1, "D" : -1}
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input().strip()
        x, y, flag = 0, 0, 0
        for i in s:
            x += hmapx[i]
            y += hmapy[i]
            if x == 1 and y == 1:
                flag = 1
                break
        if flag == 0:
            ans.append("NO")
        else:
            ans.append("YES")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()