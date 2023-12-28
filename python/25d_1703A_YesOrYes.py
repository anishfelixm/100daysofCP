def main():
    t = int(input())
    ans = []
    for _ in range(t):
        temp = input().strip().lower()
        if temp == "yes":
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()