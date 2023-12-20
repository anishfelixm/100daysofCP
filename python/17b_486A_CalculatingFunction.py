def main():
    n = int(input())
    if n % 2 == 0:
        c = ((n - 2) // 2) + 1
        se = (c * (n + 2)) // 2
        so = (c * (-1) * (n)) // 2
        print(so+se)
    else:
        c = ((n - 1) // 2 ) + 1
        se = ((c - 1) * (2 + n - 1)) // 2
        so = (c * (-1 - n)) // 2
        print(so + se)

if __name__ == "__main__":
    main()