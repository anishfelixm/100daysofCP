def main():
    n = int(input())
    ans = 00
    for i in range(n):
        sum = 0
        line = input()
        line = line.split()
        for j in line:
            sum += int(j)
        if sum > 1:
            ans += 1
    print(ans)

if __name__ == "__main__":
    main()