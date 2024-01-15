def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n % 4 == 0:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()