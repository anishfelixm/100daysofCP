def main():
    ans =[]
    t = int(input())
    for _ in range(t):
        x, y, n = input().split()
        x, y, n = int(x), int(y), int(n)
        k = (n // x)
        k = (k * x) + y
        if k > n:
            k -= x
        ans.append(k)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()