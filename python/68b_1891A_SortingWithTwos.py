from math import log2

def solve(arr, n):
    l = pow(2,int(log2(n))) - 1
    if l+1 < n:
        maxi = arr[l+1]
        for i in range(l+2, n):
            if arr[i] < maxi:
                return "NO"
            maxi = max(maxi, arr[i])
    for i in range(l, 0, -1):
        if int(log2(i)) != int(log2(i+1)):
            maxi = arr[i]
        else:
            if arr[i] > maxi:
                return "NO"
            maxi = min(maxi, arr[i])
    return "YES"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        ans.append(solve(a, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()