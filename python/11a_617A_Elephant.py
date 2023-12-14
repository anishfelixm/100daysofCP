def main():
    x = int(input())
    pos = 0
    steps = 0
    while pos < x:
        if pos + 5 <= x:
            steps += 1
            pos += 5
        elif pos + 4 <= x:
            steps += 1
            pos += 4
        elif pos + 3 <= x:
            steps += 1
            pos += 3
        elif pos + 2 <= x:
            steps += 1
            pos += 2
        else:
            steps += 1
            pos += 1
    print(steps)

if __name__ == "__main__":
    main()