def main():
    n, h = input().split()
    n, h = int(n), int(h)
    w = 0
    a = input().split()
    for i in range(n):
        temp = int(a[i])
        if temp > h : 
            w += 2
        else:
            w += 1
    print(w)

if __name__ == "__main__":
    main()