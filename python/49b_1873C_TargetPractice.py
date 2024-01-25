def count(i, j):
    if i % 9 == 0 or i % 9 == 9 or j % 9 == 0 or j % 9 == 9:
        return 1
    elif i % 9 == 1 or i % 9 == 8 or j % 9 == 1 or j % 9 == 8:
        return 2
    elif i % 9 == 2 or i % 9 == 7 or j % 9 == 2 or j % 9 == 7:
        return 3
    elif i % 9 == 3 or i % 9 == 6 or j % 9 == 3 or j % 9 == 6:
        return 4
    else:
        return 5

def solve():
    arr = []
    cnt = 0
    for _ in range(10):
        arr.append(list(input().rstrip()))
    #print(arr)
    for i in range(10):
        for j in range(10):
            if arr[i][j] == 'X':
                cnt += count(i, j)
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        ans.append(solve())
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()