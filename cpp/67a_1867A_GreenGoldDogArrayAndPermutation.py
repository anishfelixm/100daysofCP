def solve(a, n):
    b = list(a)
    b.sort(reverse=True)
    hmap = {}
    for i in range(n):
        hmap[b[i]] = i+1
    ret = []
    for i in range(n):
        ret.append(hmap[a[i]])
        hmap[a[i]] -= 1
    return ret

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        ans.append(solve(a, n))
    for i in ans:
        for j in i:
            print(j, end = " ")
        print()

if __name__ == "__main__":
    main()