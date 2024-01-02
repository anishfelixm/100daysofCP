def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input().strip()
        hset = set()
        j, flag = 0, 0
        while j < n:
            if s[j] in hset:
                ans.append("NO")
                flag = 1
                break
            else:
                hset.add(s[j])
                temp = s[j]
                while j + 1 < n and s[j + 1] == temp:
                    j += 1
            j += 1
        if flag == 0:
            ans.append("YES")
    for i in ans:
        print(i)

if __name__ =="__main__":
    main()