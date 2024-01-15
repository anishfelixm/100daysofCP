def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c, d = input().split()
        a, b, c, d = int(a), int(b), int(c), int(d)
        x, y, z = a, c, c
        ans.append([x, y, z])
    for i in ans:
        print(i[0], i[1], i[2])

if __name__ == "__main__":
    main()