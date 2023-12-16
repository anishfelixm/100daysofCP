def main():
    n = int(input())
    temp = n
    flag, cnt = 0, 0
    while temp > 0 :
        check = temp % 10
        temp //= 10
        if check == 4 or check == 7:
            cnt += 1
    temp = cnt
    if temp == 0 :
        flag = 1
    while temp > 0:
        check = temp % 10
        temp //= 10
        if check != 4 and check != 7:
            flag = 1
            break
    if flag == 1:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    main()