def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c = input().split()
        a, b, c = int(a), int(b), int(c)
        cnt1 = abs(a - 1)
        cnt2 = abs(c - b) + abs(c - 1)
        if cnt1 > cnt2:
            ans.append(2)
        elif cnt1 < cnt2:
            ans.append(1)
        else:
            ans.append(3)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()