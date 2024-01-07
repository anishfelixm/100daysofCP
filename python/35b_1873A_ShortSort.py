def main():
    ans = []
    hmap = {'a' : 0,
            'b' : 1,
            'c' : 2}
    t = int(input())
    for _ in range(t):
        s = input().strip()
        cnt = 0
        for i in range(3):
            if hmap[s[i]] != i:
                cnt += 1
        if cnt <= 2:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()