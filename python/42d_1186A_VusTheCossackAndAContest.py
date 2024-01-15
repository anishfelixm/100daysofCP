def main():
    n, m, k = input().split()
    n, m, k = int(n), int(m), int(k)
    if min(m, k) < n:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    main()