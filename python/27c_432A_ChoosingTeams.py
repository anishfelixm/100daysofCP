def main():
    participation = {0 : 0, 1 : 0, 2 : 0, 3 : 0, 4 : 0, 5 : 0}
    n, k = input().split()
    n, k = int(n), int(k)
    times = input().split()
    for i in times:
        for j in range(5 - int(i), - 1, -1):
            participation[j] += 1
    print(participation[k] // 3)

if __name__ == "__main__":
    main()