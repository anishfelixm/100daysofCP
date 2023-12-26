def main():
    n, k = input().split()
    n, k = int(n), int(k)
    cnt, time = 0, 0
    for t in range(1,n+1):
        if time + (5 * t) + k > 240:
            break
        time += (5 * t)
        cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()