def get_dist(a):
    cnt = 0
    for i in range(1, len(a) // 2):
        cnt += (a[i] - a[i-1])
    for i in range((len(a) // 2 )+1, len(a)):
        cnt += (a[i] - a[i-1])
    return cnt

def main():
    arr = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        arr.append(a)
    for i in arr:
        i.sort()
        print(get_dist(i))
        for j in range(len(i) // 2):
            print(i[j], i[(len(i) // 2) + j])

if __name__ == "__main__":
    main()