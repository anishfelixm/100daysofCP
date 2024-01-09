def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        no_of_even, no_of_odd = 0, 0
        for i in arr:
            if int(i) % 2 == 0:
                no_of_even += 1
            else:
                no_of_odd += 1
        if no_of_odd == no_of_even:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()