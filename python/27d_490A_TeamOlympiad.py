def main():
    w = int(input())
    array = input().split()
    col = [[],[],[]]
    for i in range(w):
        array[i] = int(array[i])
        col[array[i] - 1].append(i + 1)
    numb = min(len(col[0]), min(len(col[1]), len(col[2])))
    if numb != 0:
        print(numb)
        ans = []
        while numb > 0:
            t1 = col[0][-1]
            col[0].pop()
            t2 = col[1][-1]
            col[1].pop()
            t3 = col[2][-1]
            col[2].pop()
            ans.append([t1, t2, t3])
            numb -= 1
        for i in ans:
            for j in i:
                print(j, end = " ")
            print()
    else:
        print(numb)

if __name__ == "__main__":
    main()