def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n % 3 == 0 :
            ans.append("Second")
        else:
            ans.append("First")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()