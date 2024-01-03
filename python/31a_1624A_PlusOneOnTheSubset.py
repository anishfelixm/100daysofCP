def main():
    ans = []
    t = int(input())
    for _ in range(t):
        maxi, mini = 0, 1000000001
        n = int(input())
        array = input().split()
        for i in range(n):
            array[i] = int(array[i])
            maxi = max(array[i], maxi)
            mini = min(array[i], mini)
        ans.append((maxi - mini))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()