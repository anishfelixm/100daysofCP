def main():
    cal = 0
    a1, a2, a3, a4 = input().split()
    s = input().strip()
    hmap = {'1' : int(a1),
            '2' : int(a2),
            '3' : int(a3),
            '4' : int(a4)}
    for i in s:
        cal += hmap[i]
    print(cal)

if __name__ == "__main__":
    main()