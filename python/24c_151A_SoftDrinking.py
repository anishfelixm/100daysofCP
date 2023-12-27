def main():
    n, k, l, c, d, p, nl, np = input().split()
    toasts = (min((int(c) * int(d)), min((int(p) // int(np)), ((int(k) * int(l))// int(nl)))) ) // int(n)
    print(toasts)

if __name__ == "__main__":
    main()