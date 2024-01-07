def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c, n = input().split()
        a, b, c, n = int(a), int(b), int(c), int(n)
        array = [a, b, c]
        array.sort()
        Sum = 0 + (array[2] - array[0]) + (array[2] - array[1])
        if Sum > n:
            ans.append("NO")
        else:
            n = n - Sum
            if n % 3 == 0:
                ans.append("YES")
            else:
                ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()