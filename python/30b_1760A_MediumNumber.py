def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c = input().split()
        a, b, c = int(a), int(b), int(c)
        if (a > b and a < c) or (a > c and a < b):
            ans.append(a)
        elif (b > a and b < c) or (b > c and b < a):
            ans.append(b)
        else:
            ans.append(c)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()