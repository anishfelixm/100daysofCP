def main():
    ans = []
    t = int(input())
    for _ in range(t):
        s = input().strip()
        hmap = {"A" : 0, "B" : 0, "C" : 0}
        for i in s:
            hmap[i] += 1
        if hmap["A"] + hmap["C"] == hmap["B"]:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()