def main():
    n = int(input())
    arr = list(map(int, input().split()))
    print((max(arr) - min(arr)) + 1 - n)

if __name__ == "__main__":
    main()