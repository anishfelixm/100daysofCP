def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c = input().split()
        a, b, c = int(a), int(b), int(c)
        Sum = 0
        Sum = a + b + c
        if Sum - a >= 10:
            ans.append("YES")
        elif Sum - b >= 10:
            ans.append("YES")
        elif Sum - c >= 10:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()