def main():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    print(a[(n-1) // 2])

if __name__ == "__main__":
    main()