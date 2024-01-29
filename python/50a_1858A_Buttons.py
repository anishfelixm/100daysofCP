def solve(a, b, c):
    if c % 2 != 0:
        if b <= a:
            return "First"
        else:
            return "Second"
    else:
        if a <= b:
            return "Second"
        else:
            return "First"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c = input().split()
        a, b, c = int(a), int(b), int(c)
        ans.append(solve(a, b, c))
    for i in ans:
        print(i)

if __name__ == '__main__':
    main()