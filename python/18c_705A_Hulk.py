def main():
    s1, s2 = "I hate", "I love"
    n = int(input())
    ans = ""
    for i in range(0,n):
        if i % 2 == 0:
            ans += s1 + " "
        else:
            ans += s2 + " "
        if i != (n-1):
            ans += "that "
    ans += "it"
    print(ans)

if __name__ == "__main__":
    main()