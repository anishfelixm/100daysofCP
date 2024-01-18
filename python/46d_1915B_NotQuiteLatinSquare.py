def func(s):
    check = [0, 0, 0]
    for i in s:
        if i == "A":
            check[0] = 1
        elif i == "B":
            check[1] = 1
        elif i == "C":
            check[2] = 1
    if check[0] == 0:
        return "A"
    elif check[1] == 0:
        return "B"
    else:
        return "C"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        l1 = input()
        l2 = input()
        l3 = input()
        if "?" in l1:
            ans.append(func(l1))
        elif "?" in l2:
            ans.append(func(l2))
        else:
            ans.append(func(l3))
    for i in ans:
        print(i)

if __name__ == '__main__':
    main()            