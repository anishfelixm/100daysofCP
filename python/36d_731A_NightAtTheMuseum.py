def main():
    hmap = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 10, 'k': 11, 'l': 12,
        'm': 13, 'n': 14, 'o': 15, 'p': 16, 'q': 17, 'r': 18, 's': 19, 't': 20, 'u': 21, 'v': 22, 'w': 23, 'x': 24, 'y': 25, 'z': 26}
    s = input().strip()
    cnt = 0
    prev = 'a'
    for i in s:
        clk = abs(hmap[prev] - hmap[i])
        aclk1 = abs(hmap['z'] - hmap[i]) + 1 + abs(hmap[prev] - hmap['a'])
        aclk2 = abs(hmap['z'] - hmap[prev]) + 1 + abs(hmap['a'] - hmap[i])
        aclk = min(aclk1, aclk2)
        cnt += min(clk, aclk)
        prev = i
    print(cnt)

if __name__ == "__main__":
    main()