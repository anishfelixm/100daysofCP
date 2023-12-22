def main():
    t = int(input())
    ans = []
    for _ in range(t):
        a, b = input().split()
        a, b = int(a), int(b)
        temp = b - (a % b)
        if temp == b:
            temp = 0
        ans.append(temp)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()