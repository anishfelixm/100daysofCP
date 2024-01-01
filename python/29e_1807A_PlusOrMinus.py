def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c = input().split()
        a, b, c = int(a), int(b), int(c)
        if a + b == c:
            ans.append("+")
        else:
            ans.append("-")
    for i in ans:
        print(i)

if __name__== "__main__":
    main()