def main():
    numbs = input().split()
    for i in range(4):
        numbs[i] = int(numbs[i])
    numbs.sort()
    a, b, c = numbs[3] - numbs[0], numbs[3] - numbs[1], numbs[3] - numbs[2]
    print(f"{a} {b} {c}")

if __name__ == "__main__":
    main()