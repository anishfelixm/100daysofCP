def main():
    t = int(input())
    ans = []
    for _ in range(t):
        hmap = {}
        n = int(input())
        array = input().split()
        for i in range(n):
            array[i] = int(array[i])
            if array[i] not in hmap:
                hmap[array[i]] = {"index" : i+1, "cnt" : 1}
                continue
            hmap[array[i]]["index"] = i+1
            hmap[array[i]]["cnt"] += 1
        for key,value in hmap.items():
            if value["cnt"] == 1:
                ans.append(value["index"])
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()