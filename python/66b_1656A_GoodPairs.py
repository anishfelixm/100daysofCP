def solve(a, n):
    min_pos, max_pos = 0, 0
    for i in range(1, n):
        if a[i] < a[min_pos]:
            min_pos = i
        if a[i] > a[max_pos]:
            max_pos = i
    return [min_pos + 1, max_pos + 1]

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        ans.append(solve(a, n))
    for i in ans:
        print(i[0], i[1])

if __name__ == "__main__":
    main()