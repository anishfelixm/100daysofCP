def main():
    ans = []
    check = ['c','o','d','e','f','o','r','c','e','s']
    t = int(input())
    for _ in range(t):
        temp = input().strip()
        if temp in check:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:print(i)

if __name__ == "__main__":
    main()
    