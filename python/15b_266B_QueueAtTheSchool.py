def main():
    n, t = input().split()
    n, t = int(n), int(t)
    s = list(input())
    while t :
        t -= 1
        i = 1
        while i < n:
            if s[i - 1] == "B" and s[i] == "G" :
                s[i - 1] = "G"
                s[i] = "B"
                i = i + 1
            i += 1
    ans = ""
    for k in s:
        ans += k 
    print(ans)

if __name__ == "__main__":
    main()