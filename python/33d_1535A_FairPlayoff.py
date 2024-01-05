def main():
    ans = []
    t = int(input())
    for _ in range(t):
        s1, s2, s3, s4 = input().split()
        s1, s2, s3, s4 = int(s1), int(s2), int(s3), int(s4)
        if (s1 > s3 and s1 > s4) and (s2 > s3 and s2 > s4):
            ans.append("NO")
        elif (s3 > s1 and s3 > s2) and (s4 > s1 and s4 > s2):
            ans.append("NO")
        else:
            ans.append("YES")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()