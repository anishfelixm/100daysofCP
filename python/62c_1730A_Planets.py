def solve(arr, n, c):
    hmap = {}
    cnt, i = 0, 0
    arr.sort()
    for i in arr:
        if i in hmap:
            hmap[i] += 1
        else:
            hmap[i] = 1
    for i in hmap:
        cnt += min(hmap[i], c)
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, c = map(int, input().split())
        arr = list(map(int, input().split()))
        ans.append(solve(arr, n, c))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()