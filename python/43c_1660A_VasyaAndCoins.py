def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b = input().split()
        a, b = int(a), int(b)
        if a == 0:
            ans.append(1)
        else:
            ans.append(a + (2 * b) + 1)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()