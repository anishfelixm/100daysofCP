def main():
    s = input()
    s = s[1 : len(s) - 1]
    k = set()
    for i in s:
        if i.isalpha():
            k.add(i)
    print(len(k))

if __name__ == "__main__":
    main()