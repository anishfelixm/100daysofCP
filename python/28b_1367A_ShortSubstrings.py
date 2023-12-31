def main():
    ans = []
    t = int(input())
    for _ in range(t):
        b = input().strip()
        j, temp = 0, ""
        while j < len(b):
            temp += b[j]
            j += 2
        j -= 1
        temp += b[j]
        ans.append(temp)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()