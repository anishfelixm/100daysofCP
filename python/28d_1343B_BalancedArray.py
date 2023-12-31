def main():
    t = int(input())
    n = []
    for _ in range(t):
        n.append(int(input()))
    for i in n:
        if i % 4 != 0:
            print("NO")
        else:
            print("YES")
            ans = []
            for j in range(0, (i // 2)):
                ans.append((2*(j+1)))
            for j in range(0, (i // 2) - 1):
                ans.append(ans[j] - 1)
            ans.append((3 * (i // 2)) - 1)
            for j in ans:
                print(j, end = " ")
            print()

if __name__ == "__main__":
    main()