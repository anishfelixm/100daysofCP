def main():
    a, b = input().split()
    a = int(a)
    b = int(b)
    ans = 0
    while a <= b:
        ans += 1
        a = 3 * a
        b = 2 * b
    print(ans)

if __name__ == "__main__":
    main()