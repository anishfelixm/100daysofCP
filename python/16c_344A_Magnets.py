def main():
    prev, next, grp = 0, 0, 0
    n = int(input())
    for i in range(n):
        temp = input()
        if i == 0:
            prev = temp[0]
            continue
        next = temp[0]
        if next != prev:
            grp += 1
            prev = next
    grp += 1
    print(grp)

if __name__ == "__main__":
    main()