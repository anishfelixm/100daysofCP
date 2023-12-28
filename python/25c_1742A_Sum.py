def main():
    t = int(input())
    ans = []
    for _ in range(t):
        numbs = input().split()
        for i in range(3):
            numbs[i] = int(numbs[i])
        numbs.sort()
        if numbs[0] + numbs[1] == numbs[2]:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()