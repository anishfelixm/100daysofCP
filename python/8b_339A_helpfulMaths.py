def main():
    string = input().rstrip()
    numbers = string.split("+")
    numbers.sort()
    ans = ""
    for i in numbers:
        ans += i + "+"
    ans = ans[:-1]
    print(ans)

if __name__ == "__main__":
    main()