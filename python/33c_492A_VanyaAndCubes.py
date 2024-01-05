def main():
    n = int(input())
    cnt, h = 0, 0
    while cnt <= n:
        h += 1
        cnt += (h * (h + 1)) // 2
    h -= 1
    print(h)

if __name__ == "__main__":
    main()