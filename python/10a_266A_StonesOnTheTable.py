def main():
    n = int(input())
    s = input()
    cnt = 0
    if n == 1:
        print(cnt)
        return
    for i in range(1,n):
        if s[i-1] == s[i]:
            cnt += 1
    print(cnt)

if __name__  == "__main__":
    main()