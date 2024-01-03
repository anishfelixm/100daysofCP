def main():
    ans = []
    t = int(input())
    for _ in range(t):
        a, b = input().split()
        a, b = int(a), int(b)
        side = max((2 * min(a,b)), max(a,b))
        ans.append((side * side))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()