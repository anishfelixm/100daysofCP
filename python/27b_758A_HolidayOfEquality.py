def main():
    n = int(input())
    citizens = input().split()
    sum, maxi = 0, 0
    for i in citizens:
        sum += int(i)
        if int(i) > maxi:
            maxi = int(i)
    print((maxi * n) - (sum))

if __name__ == "__main__":
    main()