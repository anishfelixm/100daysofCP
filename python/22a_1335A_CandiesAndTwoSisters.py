def main():
    t = int(input())
    ans = []
    for _ in range(t):
        temp = int(input())
        if temp % 2 != 0:
            ans.append(temp // 2)
        else:
            ans.append((temp // 2) - 1)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()