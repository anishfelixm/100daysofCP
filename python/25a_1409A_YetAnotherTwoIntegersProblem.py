def main():
    t = int(input())
    ans = []
    for _ in range(t):
        a, b = input().split()
        a, b = int(a), int(b)
        temp = abs(a - b) // 10
        if abs(a - b) % 10 != 0:
            temp += 1
        ans.append(temp)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()