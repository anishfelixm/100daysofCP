def main():
    t = int(input())
    ans = []
    for _ in range(t):
        k = int(input())
        cnt, jump = 0, 1
        while jump <= k:
            cnt += 1
            while cnt % 3 == 0 or (cnt % 10) == 3:
                cnt += 1
            jump += 1
        ans.append(cnt)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()