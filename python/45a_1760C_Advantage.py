def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        arr_temp = []
        for i in range(n):
            arr[i] = int(arr[i])
            arr_temp.append(arr[i])
        arr_temp.sort()
        nxt = []
        for i in arr:
            if i == arr_temp[-1]:
                nxt.append(i - arr_temp[-2])
            else:
                nxt.append(i - arr_temp[-1])
        ans.append(nxt)
    for i in ans:
        for j in i:
            print(j, end = " ")
        print()

if __name__ == "__main__":
    main()