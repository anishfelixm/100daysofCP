def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        c2 = (n // 3)
        c1 = n - (2 * c2)
        if c1 - c2 == 2:
            c2 += 1
            c1 -= 2
        ans.append([c1,c2])
    for i in ans:
        print(i[0], i[1])

if __name__ == "__main__":
    main()