def main():
    n = int(input())
    k = (n // 2)
    ans = []
    if n % 2 == 0:
        for i in range(k):
            ans.append(2)
    else:
        for i in range(k-1):
            ans.append(2)
        ans.append(3)
    print(k)
    for i in ans:
        print(i, end = " ")

if __name__ == "__main__":
    main()