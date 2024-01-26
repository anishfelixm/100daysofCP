def solve(pos):
    col = pos[0]
    row = pos[1]
    arr = []
    grp = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
    for i in range(1,9):
        if i != int(row):
            arr.append(f"{col}{i}")
    for j in grp:
        if j != col:
            arr.append(f"{j}{row}")
    return arr
def main():
    ans = []
    t = int(input())
    for _ in range(t):
        pos = input().strip()
        ans.append(solve(pos))
    for i in ans:
        for j in i:
            print(j)

if __name__ == "__main__":
    main()