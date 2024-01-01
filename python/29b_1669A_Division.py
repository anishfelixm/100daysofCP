def main():
    n = int(input())
    ans = []
    for _ in range(n):
        rating = int(input())
        if rating >= 1900:
            ans.append("Division 1")
        elif rating >= 1600 :
            ans.append("Division 2")
        elif rating >= 1400 :
            ans.append("Division 3")
        else:
            ans.append("Division 4")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()