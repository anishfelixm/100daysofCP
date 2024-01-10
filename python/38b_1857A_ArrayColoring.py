def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = map(int, input().split())
        no_of_even, no_of_odd = 0, 0
        for i in arr:
            if i % 2 == 0:
                no_of_even += 1
            else:
                no_of_odd += 1
        if no_of_odd % 2 == 0:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()