def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, m = input().split()
        n, m = int(n), int(m)
        if n == 1:
            ans.append(0)
        elif n == 2:
            ans.append(m)
        else:
            ans.append(m * 2)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()