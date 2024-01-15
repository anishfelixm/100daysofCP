def main():
    ans = []
    t = int(input())
    for _ in range(t):
        k = input().strip()
        s = input().strip()
        hmap = {}
        for i in range(len(k)):
            hmap[k[i]] = i
        cnt = 0
        for i in range(1,len(s)):
            cnt += abs(hmap[s[i]] - hmap[s[i-1]])
        ans.append(cnt)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()