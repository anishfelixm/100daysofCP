def main():
    m_cnt, c_cnt = 0, 0
    n = int(input())
    for _ in range(n):
        m, c = input().split()
        m, c = int(m), int(c)
        if m > c:
            m_cnt += 1
        elif c > m:
            c_cnt += 1
    if m_cnt > c_cnt:
        print("Mishka")
    elif c_cnt > m_cnt:
        print("Chris")
    else:
        print("Friendship is magic!^^")

if __name__ == "__main__":
    main()