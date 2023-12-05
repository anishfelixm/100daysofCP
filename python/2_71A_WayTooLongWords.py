def main():
    n = int(input())
    strings = []
    for i in range(n):
        strings.append(input())
    for i in range(n):
        if len(strings[i]) > 10:
            temp = strings[i]
            strings[i] = temp[0] + f"{len(temp)-2}" + temp[-1]
    for i in strings:
        print(i)

if __name__ == "__main__":
    main()