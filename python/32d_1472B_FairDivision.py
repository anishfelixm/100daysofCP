def main():
    ans = []
    t = int(input())
    for _ in range(t):
        no_of_1, no_of_2 = 0, 0
        n = int(input())
        a = input().split()
        for i in a:
            if int(i) == 1:
                no_of_1 += 1
            else:
                no_of_2 += 1
        if no_of_1 % 2 != 0:
            ans.append("NO")
        else:
            if no_of_1 == 0:
                if no_of_2 % 2 == 0:
                    ans.append("YES")
                else:
                    ans.append("NO")
            else:
                ans.append("YES")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()