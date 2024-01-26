def main():
    ans = []
    t = int(input())
    for _ in range(t):
        p = int(input())
        ans.append([2, p-1])
    for i in ans:
        print(i[0], i[1])

if __name__ == "__main__":
    main()