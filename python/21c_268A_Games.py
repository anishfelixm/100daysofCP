def main():
    uniforms = []
    cnt = 0
    n = int(input())
    for _ in range(n):
        h, a = input().split()
        h, a = int(h), int(a)
        uniforms.append([h,a])
    for h in range(n):
        for a in range(n):
            if a == h:
                continue
            if uniforms[h][0] == uniforms[a][1]:
                cnt += 1
    print(cnt)

if __name__ == "__main__":
    main()