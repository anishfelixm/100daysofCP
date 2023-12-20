def main():
    n = int(input())
    cnt = 0
    for i in range(n):
        p, q = input().split()
        p, q = int(p), int(q)
        if q - p >= 2:
            cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()