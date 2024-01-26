def solve(a, b, c, x, y):
    if a + b + c < x + y :
        return "NO"
    x -= a
    if x <= 0:
        if b + c >= y:
            return "YES"
        else:
            return "NO"
    else:
        c -= x
        if c < 0:
            return "NO"
        else:
            if b + c >= y:
                return "YES"
            else:
                return "NO"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c, x, y = input().split()
        a, b, c, x, y = int(a), int(b), int(c), int(x), int(y)
        ans.append(solve(a, b, c, x, y))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()