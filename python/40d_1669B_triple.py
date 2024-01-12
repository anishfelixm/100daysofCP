def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        hmap = {}
        num = -1
        for i in arr:
            if i not in hmap:
                hmap[i] = 1
            else:
                hmap[i] += 1
            if hmap[i] >= 3:
                num = i
        ans.append(num)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()