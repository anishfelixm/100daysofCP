def main():
    s = input().strip()
    ans = ""
    i = 0
    while i < len(s):
        if s[i] == ".":
            ans += "0"
        else:
            i += 1
            if s[i] == ".":
                ans += "1"
            else:
                ans += "2"
        i += 1
    print(ans)

if __name__ == "__main__":
    main()