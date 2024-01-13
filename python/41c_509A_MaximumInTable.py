def main():
    n = int(input())
    arr = []
    for i in range(n):
        nxt = []
        for j in range(n):
            if i == 0 or j == 0:
                nxt.append(1)
            else:
                nxt.append(nxt[-1]+arr[i-1][j])
        arr.append(nxt)
    print(arr[n-1][n-1])

if __name__ == "__main__":
    main()