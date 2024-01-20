def solve(s, n):
    sol = ""
    sol += s[0]
    prev = s[0]
    flag = 0
    for i in range(1,n-1):
        if flag == 1:
            prev = s[i]
            sol += s[i]
            flag = 0
        elif s[i] == prev:
            flag = 1
    return sol

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