def main():
    ans = []
    t = int(input())
    for _ in range(t):
        temp = input().strip()
        n = len(temp)
        temp1, temp2 = temp[:(n//2)], temp[(n//2):]
        if temp1 == temp2:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()