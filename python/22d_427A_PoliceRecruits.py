def main():
    n = int(input())
    c = input().split()
    cnt = 0
    pol = 0
    for i in range(n):
        c[i] = int(c[i])
        if c[i] == -1:
            if pol < 1:
                cnt += 1
            else:
                pol -= 1
        else:
            pol += c[i]
    print(cnt)

if __name__ == "__main__":
    main()