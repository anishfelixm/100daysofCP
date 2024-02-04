def solve(a, b, n):
    a_1, b_1, a_out = 0, 0, 0
    for i in range(n):
        if a[i] == 1:
            a_1 += 1
        if b[i] == 1:
            b_1 += 1
        if a[i] != b[i]:
            a_out += 1
    if abs(a_1 - b_1) == a_out:
        return abs(a_1 - b_1)
    else:
        return abs(a_1 - b_1) + 1
    
def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        ans.append(solve(a, b, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()