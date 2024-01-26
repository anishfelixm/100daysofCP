def solve(arr, n):
    s = 0
    for i in range(n):
        arr[i] = int(arr[i])
        s += arr[i]
    if s % n != 0:
        return -1
    arr.sort()
    need, mid = 0, (s // n)
    for i in arr:
        if i < mid:
            need += (mid - i)
        else:
            break
    k = 0
    #print(need, mid, k)
    for i in range(n-1, -1, -1):
        if arr[i] > mid:
            need -= (arr[i] - mid)
            k += 1
            if need < 0:
                break
        else:
            break
        #print(need, mid, k)
    return k

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        ans.append(solve(arr, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()