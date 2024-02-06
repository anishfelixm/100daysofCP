def solve(arr, n):
    hmap = {}
    last = max(arr)
    for i in arr:
        if i in hmap:
            hmap[i] += 1
        else:
            hmap[i] = 1
    if 0 not in hmap:
        return "NO"
    #print(hmap)
    for i in range(1,last+1):
        if i not in hmap:
            return "NO"
        else:
            #print(i, hmap[i])
            if hmap[i] > hmap[i-1]:
                return "NO"
    return "YES"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        ans.append(solve(arr, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()