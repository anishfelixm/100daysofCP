def main():
    n = int(input())
    cnt = 0
    for i in range(1,(n // 2) + 1):
        if (n - i) % i == 0:
            cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()