def solve(n):
    return (n+1) // 10

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