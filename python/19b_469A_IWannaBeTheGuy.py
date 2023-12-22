def main():
    n = int(input())
    p = input().split()
    q = input().split()
    ans = [False] * n
    for i in range(1, len(p)):
        ans[int(p[i]) - 1] = True
    for i in range(1, len(q)):
        ans[int(q[i]) - 1] = True
    for i in ans :
        if i == False:
            print("Oh, my keyboard!")
            return
    print("I become the guy.")

if __name__ == "__main__":
    main()