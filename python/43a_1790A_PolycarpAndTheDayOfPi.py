def main():
    ans = []
    pi_chck = "314159265358979323846264338327"
    t = int(input())
    for _ in range(t):
        pi = input().strip()
        cnt = 0
        for j in range(len(pi)):
            if pi[j] == pi_chck[j]:
                cnt += 1
            else:
                break
        ans.append(cnt)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()