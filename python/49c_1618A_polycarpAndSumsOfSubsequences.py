def solve(b):
    for i in range(7):
        b[i] = int(b[i])
    b.sort()
    a = []
    a.append(b[0])
    a.append(b[1])
    a.append(b[-1] - b[0] - b[1])
    return a

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        arr = input().split()
        ans.append(solve(arr))
    for i in ans:
        for j in i:
            print(j, end = " ")
        print()

if __name__ == "__main__":
    main()