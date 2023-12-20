def main():
    n = int(input())
    ans = [0] * n
    gifts = input().split()
    for i in range(n):
        ans[int(gifts[i]) - 1] = i + 1
    for i in ans:
        print(i,end = " ")

if __name__ == "__main__":
    main()