def main():
    ans = []
    t = int(input())
    for _ in range(t):
        s = ""
        for __ in range(8):
            n_line = input().strip()
            for i in n_line:
                if i != ".":
                    s += i
        ans.append(s)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()