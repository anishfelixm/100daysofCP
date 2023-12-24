def main():
    n = int(input())
    temp = n
    cnt = 0
    while temp > 0:
        if temp - 100 >= 0:
            temp -= 100
            cnt += 1
        elif temp - 20 >= 0:
            temp -= 20
            cnt += 1
        elif temp - 10 >= 0:
            temp -= 10
            cnt += 1
        elif temp - 5 >= 0:
            temp -= 5
            cnt += 1
        elif temp - 1 >= 0:
            temp -= 1
            cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()