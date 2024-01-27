def solve(n, m, x):
    col, row = (x-1) // n, (x - 1) % n
    #print(row, col)
    return m * (row) + (col + 1)

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, m, x = input().split()
        n, m, x = int(n), int(m), int(x)
        ans.append(solve(n,m,x))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()