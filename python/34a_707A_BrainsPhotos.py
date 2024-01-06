def main():
    flag = 0
    n, m = input().split()
    n, m = int(n), int(m)
    for i in range(n):
        row_pix = input().split()
        for j in row_pix:
            if j != "W" and j != "B" and j != "G":
                flag = 1
    if flag == 0:
        print("#Black&White")
    else:
        print("#Color")

if __name__ == "__main__":
    main()