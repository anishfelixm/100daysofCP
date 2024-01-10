def main():
    n = int(input())
    arr = input().split()
    start, end, maxi = 0, 0, 1
    arr[0] = int(arr[0])
    for i in range(1,n):
        arr[i] = int(arr[i])
        if arr[i] > arr[i-1]:
            end += 1
        else:
            maxi = max(maxi, (end - start) + 1)
            start, end = i, i
    maxi = max(maxi, (end - start) + 1)
    print(maxi)

if __name__ == "__main__":
    main()