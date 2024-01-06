def main():
    t = int(input())
    numb = []
    for _ in range(t):
        numb.append(input().strip())
    for i in numb:
        j = len(i) - 1
        ans = []
        n = ""
        while j >= 0:
            if i[j] != "0":
                n += i[j]
                for k in range(j, len(i) - 1):
                    n += "0"
                ans.append(n)
                n = ""
            j -= 1
        print(len(ans))
        for k in ans:
            print(k, end = " ")
        print()

if __name__ == "__main__":
    main()