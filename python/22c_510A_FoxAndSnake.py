def main():
    n, m = input().split()
    n, m = int(n), int(m)
    ans = []
    for i in range(n):
        n_line = []
        for j in range(m):
            if i % 2 == 0:
                n_line.append("#")
            elif (i - 1) % 4 == 0:
                if j == m - 1:
                    n_line.append("#")
                else:
                    n_line.append(".")
            else:
                if j == 0:
                    n_line.append("#")
                else:
                    n_line.append(".")
        ans.append(n_line)
    for i in range(n):
        for j in range(m):
            print(ans[i][j], end = "")
        print()

if __name__ == "__main__":
    main()