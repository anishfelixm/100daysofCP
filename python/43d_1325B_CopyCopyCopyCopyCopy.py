def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        hset = set(input().split())
        ans.append(len(hset))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()