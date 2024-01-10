def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        x, y, cnt, ans_arr = 0, n - 1, 0, []
        while cnt < n:
            if cnt % 2 == 0:
                ans_arr.append(arr[x])
                x += 1
            else:
                ans_arr.append(arr[y])
                y -= 1
            cnt += 1
        ans.append(ans_arr)
    for i in ans:
        for j in i:
            print(j, end = " ")
        print()

if __name__ == "__main__":
    main()