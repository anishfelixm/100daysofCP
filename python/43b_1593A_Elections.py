def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b, c = input().split()
        a, b, c = int(a), int(b), int(c)
        arr = []
        if a > b and a > c:
            arr.append(0)
        else:
            arr.append(max(b, c) - a + 1)
        if b > a and b > c:
            arr.append(0)
        else:
            arr.append(max(a, c) - b + 1)
        if c > a and c > b:
            arr.append(0)
        else:
            arr.append(max(b, a) - c + 1)
        ans.append(arr)
    for i in ans:
        print(i[0], i[1], i[2])

if __name__ == "__main__":
    main()