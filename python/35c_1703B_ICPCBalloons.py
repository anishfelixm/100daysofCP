def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input().strip()
        balloons = n
        hset = set()
        for i in s:
            if i not in hset:
                balloons += 1
                hset.add(i)
        ans.append(balloons)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()