from math import ceil

def solve(arr, n):
    arr[1:] = sorted(arr[1:])
    #print(arr)
    for i in range(1, n):
        if arr[i] > arr[0]:
            arr[0] = ceil((arr[i] + arr[0]) / 2)
    return arr[0]

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        ans.append(solve(arr, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()