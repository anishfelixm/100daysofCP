def main():
    s = input()
    upper, lower = 0, 0
    ans = ""
    for i in s:
        if i.isupper():
            upper += 1
        else:
            lower += 1
    if upper > lower:
        for i in s:
            ans += i.upper()
    else:
        for i in s:
            ans += i.lower()
    print(ans)

if __name__ == "__main__":
    main()