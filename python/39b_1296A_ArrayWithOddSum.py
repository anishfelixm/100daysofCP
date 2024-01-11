def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        cnt, no_of_odd = 0, 0
        for i in arr:
            cnt += int(i)
            if int(i) % 2 != 0:
                no_of_odd += 1
        if no_of_odd == 0:
            ans.append("NO")
        else:
            if cnt % 2 == 0 and no_of_odd == n:
                ans.append("NO")
            else:
                ans.append("YES")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()