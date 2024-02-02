def solve(s):
    arr = []
    i = 0
    while i < len(s):
        if s[i] == "1":
            temp = 0
            while i < len(s) and s[i] == "1":
                temp += 1
                i += 1
            arr.append(temp)
        else:
            i += 1
    cnt = 0
    arr.sort(reverse=True)
    for i in range(0,len(arr), 2):
        cnt += arr[i]
    return cnt

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        s = input()
        ans.append(solve(s))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()