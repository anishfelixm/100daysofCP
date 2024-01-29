def solve(a, b, k, n):
    arr = []
    for i in range(n):
        a[i] = int(a[i])
        b[i] = int(b[i])
        arr.append([a[i],b[i]])
    arr.sort()
    for i in range(n):
        if arr[i][0] > k:
            continue
        else:
            k += arr[i][1]
    return k

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, k = input().split()
        n, k = int(n), int(k)
        a = input().split()
        b = input().split()
        ans.append(solve(a, b, k, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()