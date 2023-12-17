def main():
    n = int(input())
    cnt = 0
    ans = 0
    for i in range(n):
        b, a = input().split()
        b, a = int(b), int(a)
        cnt = cnt - b + a
        ans = max(ans, cnt)
    print(ans)

if __name__ == "__main__":
    main()