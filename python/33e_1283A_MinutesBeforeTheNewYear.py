def main():
    ans = []
    t = int(input())
    for _ in range(t):
        h, m = input().split()
        h, m = int(h), int(m)
        ans.append((24 * 60) - ((h * 60) + m))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()