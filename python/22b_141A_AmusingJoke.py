def main():
    s1 = input()
    s1 += input()
    s3 = input()
    hmap1 = {}
    hmap2 = {}
    for i in s1:
        if i not in hmap1:
            hmap1[i] = 1
        else:
            hmap1[i] += 1
    for i in s3:
        if i not in hmap2:
            hmap2[i] = 1
        else:
            hmap2[i] += 1
    if hmap1 == hmap2:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()