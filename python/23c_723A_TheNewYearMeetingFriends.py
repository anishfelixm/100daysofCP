def main():
    dist = input().split()
    for i in range(len(dist)):
        dist[i] = int(dist[i])
    dist.sort()
    ans = (dist[1] - dist[0]) + (dist[2] - dist[1])
    print(ans)

if __name__ == "__main__":
    main()