def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, k = input().split()
        n, k = int(n), int(k)
        a = input().split()
        b = input().split()
        for i in range(n):
            a[i] = int(a[i])
            b[i] = int(b[i])
        a.sort()
        b.sort()
        temp = 0
        Sum = 0
        for i in range(n):
            if temp < k and a[i] < b[n - 1 - temp]:
                a[i] = b[n - 1 - temp]
                temp += 1
            Sum += a[i]
        ans.append(Sum)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()