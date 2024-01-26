def solve(s, n, k):
    cnt, i = 0, 0
    while i < n:
        if s[i] == "B":
            cnt += 1
            i += k
        else:
            i += 1
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, k = input().split()
        n, k = int(n), int(k)
        s = input().strip()
        ans.append(solve(s, n, k))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()