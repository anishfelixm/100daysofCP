def main():
    cnt = 0
    n, x = input().split()
    n, x = int(n), int(x)
    for _ in range(n):
        sym, d = input().split()
        if sym == "+":
            x += int(d)
        else:
            if x >= int(d):
                x -= int(d)
            else:
                cnt += 1
    print(x, cnt)

if __name__ == "__main__":
    main()