def main():
    n = int(input())
    x = 0
    for _ in range(n):
        temp = input()
        if temp.startswith("++") or temp.endswith("++"):
            x += 1
        elif temp.startswith("--") or temp.endswith("--"):
            x -= 1
    print(x)


if __name__ == "__main__":
    main()
