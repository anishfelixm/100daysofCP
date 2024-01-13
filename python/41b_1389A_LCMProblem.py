def main():
    ans = []
    t = int(input())
    for _ in range(t):
        l, r = input().split()
        l, r = int(l), int(r)
        x, y, j = l, -1, 2
        while (x * 2) <= r:
            if x * j <= r:
                y = x * j
                break
            else:
                x += 1
            j += 1
        if y == -1:
            ans.append([-1,-1])
        else:
            ans.append([x,y])
    for i in ans:
        print(i[0],i[1])

if __name__ == "__main__":
    main()