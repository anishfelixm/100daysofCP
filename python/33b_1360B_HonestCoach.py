def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        array = input().split()
        for i in range(n):
            array[i] = int(array[i])
        array.sort()
        val = array[-1]
        for i in range(1,n):
            val = min(val, (array[i] - array[i-1]))
        ans.append(val)
    for i in ans:
        print(i)

if __name__ =="__main__":
    main()