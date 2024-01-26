def solve(s, n):
    hset = set()
    for i in range(1, n):
        hset.add(s[i-1:i+1])
    return len(hset)

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