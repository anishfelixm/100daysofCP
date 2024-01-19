def func(arr, n):
    cnt = 0
    for i in range(n//2):
        cnt += (arr[n-1-i] - arr[i])
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        for i in range(n):
            arr[i] = int(arr[i])
        arr.sort()
        ans.append(func(arr, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()