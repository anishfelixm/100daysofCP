def solve(a, n):
    m1, m2 = 0, 0
    for i in a:
        if i > m1:
            m2 = m1
            m1 = i
        elif i > m2:
            m2 = i
    return m1 + m2

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        ans.append(solve(a, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()