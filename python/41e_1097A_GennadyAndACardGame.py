def main():
    t_c = input().strip()
    c1, c2, c3, c4, c5 = input().split(" ")
    chck_r, chck_s = t_c[0], t_c[1]
    if c1[0] == chck_r or c2[0] == chck_r or c3[0] == chck_r or c4[0] == chck_r or c5[0] == chck_r:
        print("YES")
    elif c1[1] == chck_s or c2[1] == chck_s or c3[1] == chck_s or c4[1] == chck_s or c5[1] == chck_s:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()