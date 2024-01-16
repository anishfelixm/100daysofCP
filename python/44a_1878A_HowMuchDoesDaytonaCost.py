def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, k = input().split()
        arr = input().split()
        if k in arr:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()