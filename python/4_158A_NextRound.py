def main():
    n, k = input().split()
    ans = 0
    scores = []
    n = int(n)
    k = int(k)
    scores = [int(el) for el in input().split()]
    check = scores[k-1]
    for i in scores:
        if i >= check and i > 0:
            ans += 1
    print(ans)

if __name__ == "__main__":
    main()