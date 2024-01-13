def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        hset = set()
        nxt_ans = []
        for i in arr:
            if i not in hset:
                hset.add(i)
                nxt_ans.append(i)
        ans.append(nxt_ans)
    for i in ans:
        for j in i:
            print(j, end = " ")
        print()

if __name__ == "__main__":
    main()