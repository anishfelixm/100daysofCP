def main():
    a, b = input().split()
    a, b = int(a), int(b)
    dif_sock = min(a,b)
    same_sock = (max(a,b) - dif_sock) // 2
    print(dif_sock, same_sock)

if __name__ == "__main__":
    main()