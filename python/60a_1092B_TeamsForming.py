def main():
    n = int(input())
    arr = list(map(int, input().split()))

    arr.sort()
    cnt = 0
    for i in range(0,n,2):
        cnt += (arr[i+1] - arr[i])
    print(cnt)

if __name__ == "__main__":
    main()