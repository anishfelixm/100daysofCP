def solve(s, n):
    cnt = 0
    temp = list(s)
    temp.sort()
    for i in range(n):
        if s[i] != temp[i]:
            cnt += 1
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        ans.append(solve(s, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()