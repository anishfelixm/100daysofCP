def solve(xa, ya, xb, yb, xf, yf):
    if xa == xb and xf == xa and min(ya,yb) < yf < max(ya,yb):
        return abs(xa - xb) + abs(ya - yb) + 2
    elif ya == yb and yf == ya and min(xa,xb) < xf < max(xa,xb):
        return abs(xa - xb) + abs(ya - yb) + 2
    else:
        return abs(xa - xb) + abs(ya - yb) 

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        temp = input()
        xa, ya = input().split()
        xb, yb = input().split()
        xf, yf = input().split()
        ans.append(solve(int(xa), int(ya), int(xb), int(yb), int(xf), int(yf)))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()