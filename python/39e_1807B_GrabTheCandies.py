def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        m_cnt, b_cnt = 0, 0
        for i in arr:
            if int(i) % 2 == 0:
                m_cnt += int(i)
            else:
                b_cnt += int(i)
        if m_cnt > b_cnt:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()