def main():
    n = int(input())
    winners = input().rstrip()
    hmap = {"A" : 0,
            "D" : 0}
    for i in winners:
        hmap[i] += 1
    if hmap["A"] > hmap["D"] :
        print("Anton")
    elif hmap["A"] < hmap["D"] :
        print("Danik")
    else:
        print("Friendship")

if __name__ == "__main__":
    main()