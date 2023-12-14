def main():
    k, n, w = input().split()
    k = int(k)
    n = int(n)
    w = int(w)
    ans = int((w * (k + w * k) / 2) - n)
    if ans > 0:
        print(ans)
    else:
        print(0)

if __name__ == "__main__":
    main()