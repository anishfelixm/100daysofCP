def solve(n):
    cnt = 0
    hstack = []
    for _ in range(n):
        a, b = input().split()
        a, b = int(a), int(b)
        hstack.append(a - b)
    hstack.sort()
    while len(hstack) > 0 and hstack[-1] > 0:
        cnt += 1
        hstack.pop()
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        ans.append(solve(n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()