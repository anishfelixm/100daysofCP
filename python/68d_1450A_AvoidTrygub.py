def solve(s):
    a = list(s)
    a.sort()
    return "".join(i for i in a)

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        ans.append(solve(s))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()