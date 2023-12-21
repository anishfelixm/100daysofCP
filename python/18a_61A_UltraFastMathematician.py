def main():
    s1 = input()
    s2 = input()
    ans = ""
    for i in range(len(s1)):
        temp1, temp2 = int(s1[i]), int(s2[i])
        ans += f"{(temp1 ^ temp2)}"
    print(ans)

if __name__ == "__main__":
    main()