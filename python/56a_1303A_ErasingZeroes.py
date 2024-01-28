def solve(s):
    start, cnt = -1, 0
    for i in range(1, len(s)):
        if s[i] == '0' and s[i-1] == '1':
            start = i
        elif s[i] == '1' and s[i-1] == '0':
            if start is not -1:
                cnt += (i - start)
                start = -1
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ans.append(solve(s))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()