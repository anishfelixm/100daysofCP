def main():
    ans = []
    t = int(input())
    for _ in range(t):
        s = list(input())
        ans.append("".join(sorted(s)))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()