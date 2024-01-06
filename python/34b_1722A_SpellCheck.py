def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input().strip()
        if n != 5:
            ans.append("NO")
            continue
        flag = 0
        check = {"T" : 1,
             "i" : 1,
             "m" : 1,
             "u" : 1,
             "r" : 1}
        for i in s:
            if i in check:
                if check[i] == 0:
                    flag = 1
                    break
                else:
                    check[i] -= 1
            else:
                flag = 1
                break
        if flag == 0:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ =="__main__":
    main()