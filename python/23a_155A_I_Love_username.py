def main():
    n = int(input())
    scores = input().split()
    for i in range(n):
        scores[i] = int(scores[i])
    small, big, cnt = scores[0], scores[0], 0
    for i in range(1, n):
        if scores[i] < small:
            cnt += 1
            small = scores[i]
        if big < scores[i]:
            cnt += 1
            big = scores[i]
    print(cnt)

if __name__ == "__main__":
    main()