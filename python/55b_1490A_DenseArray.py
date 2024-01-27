def count(a, b):
    ret = 0
    while 2 * a < b:
        ret += 1
        a *= 2
    return ret

def solve(arr, n):
    cnt = 0
    arr[0] = int(arr[0])
    for i in range(1, n):
        arr[i] = int(arr[i])
        if 2 * min(arr[i], arr[i-1]) < max(arr[i], arr[i-1]):
            cnt += count(min(arr[i], arr[i-1]), max(arr[i], arr[i-1]))
    return cnt

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