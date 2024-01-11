def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = []
        if n % 2 == 0:
            for i in range(1, n + 1):
                if i % 2 != 0:
                    arr.append(i + 1)
                else:
                    arr.append(i - 1)
        else:
            for i in range(1, n - 2):
                if i % 2 != 0:
                    arr.append(i + 1)
                else:
                    arr.append(i - 1)
            arr.append(n)
            arr.append(n - 2)
            arr.append(n - 1)
        ans.append(arr)
    for i in ans:
        for j in i:
            print(j, end = " ")
        print()

if __name__ == "__main__":
    main()