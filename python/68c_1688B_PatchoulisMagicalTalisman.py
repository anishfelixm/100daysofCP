def get_val(k):
    cnt = 0
    while k % 2 == 0:
        cnt += 1
        k /= 2
    return cnt

def solve(a, n):
    even, odd = 0, 0
    for i in a:
        if i % 2 == 0:
            even += 1
        else:
            odd += 1
    if odd != 0:
        return even
    min_to_even = 1000000000
    for i in a:
        min_to_even = min(min_to_even, get_val(i))
    return min_to_even + even - 1

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