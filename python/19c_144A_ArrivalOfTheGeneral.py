def main():
    n = int(input())
    soldiers = input().split()
    big, small = 0, 0
    for i in range(n):
        if int(soldiers[i]) <= int(soldiers[small]) :
            small = i
        if int(soldiers[i]) > int(soldiers[big]) : 
            big = i
    ans = abs(0 - big) + abs(n - 1 - small)
    if small < big:
        ans -= 1
    print(ans)

if __name__ == "__main__":
    main()