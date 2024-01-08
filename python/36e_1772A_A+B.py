def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b = input().split("+")
        ans.append(int(a) + int(b))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()