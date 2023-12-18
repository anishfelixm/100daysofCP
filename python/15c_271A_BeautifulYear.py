def main():
    n = int(input())
    for i in range(n + 1, 9013):
        if distinct(i):
            print(i)
            break

def distinct(year):
    hmap = {}
    while year > 0:
        check = year % 10
        if check in hmap:
            return False
        year //= 10
        hmap[check] = 1
    return True

if __name__ == "__main__":
    main()