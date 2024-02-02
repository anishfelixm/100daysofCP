def solve(arr, n):
    ans = []
    arr.sort()
    for i in range(n):
        ans.append(arr[(2*n) - 1- i])
        ans.append(arr[i])
    return ans

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        ans.append(solve(arr, n))
    for i in ans:
        for j in i:
            print(j , end = " ")
        print()

if __name__ == "__main__":
    main()