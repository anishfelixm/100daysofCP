def solve(arr, n):
    cnt = 0
    hset = set()
    for i in arr:
        if i in hset:
            cnt += 1
        else:
            hset.add(i)
    if cnt % 2 == 0:
        return len(hset)
    else:
        return len(hset) - 1

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        ans.append(solve(arr, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()