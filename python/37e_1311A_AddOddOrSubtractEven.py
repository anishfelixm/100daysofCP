def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        x = b - a
        if x > 0:
            if x % 2 != 0:
                ans.append(1)
            else:
                ans.append(2)
        elif x < 0:
            if x % 2 == 0:
                ans.append(1)
            else:
                ans.append(2)
        else:
            ans.append(0)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()