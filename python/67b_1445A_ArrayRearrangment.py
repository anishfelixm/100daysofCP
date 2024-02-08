def solve(a, b, n, x):
    chk = [0] * 1001
    for i in a:
       chk[i] += 1
    for i in range(1, a[n-1]+1):
        chk[i] += chk[i-1]
    #print(chk)
    for i in range(n-1, -1, -1):
        k = x - b[i]
        if chk[k] < (n-i):
            return "NO"
    return "YES" 
def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        c = input()
        ans.append(solve(a, b, n, x))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()