def func(s):
    cnt = 0
    for i in s:
        if i == "D":
            cnt += 1
        else:
            cnt -= 1
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        for i in range(n):
            arr[i] = int(arr[i])
            b, moves = input().split()
            arr[i] = (arr[i] + func(moves)) % 10
            if arr[i] < 0:
                arr[i] = (10 + arr[i]) % 10
        ans.append(arr)
    for i in ans:
        for j in i:
            print(j, end = " ")
        print()

if __name__ == "__main__":
    main()