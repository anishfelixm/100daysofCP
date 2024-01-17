def main():
    s = input()
    t = input()
    cnt = 0
    for i in range(len(t)):
        if t[i] == s[cnt]:
            cnt += 1
    print(cnt+1)

if __name__ == "__main__":
    main()