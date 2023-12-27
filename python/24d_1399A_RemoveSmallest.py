def main():
    t = int(input())
    ans = []
    for _ in range(t):
        n = int(input())
        hset = set()
        numbs = input().split()
        for i in numbs:
            hset.add(int(i))
        cnt = 0
        for i in hset:
            if i-1 not in hset:
                cnt += 1
        if cnt == 1:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()