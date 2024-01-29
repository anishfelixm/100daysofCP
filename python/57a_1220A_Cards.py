def solve(n, z):
    ans = ""
    while n:
        n -= 1
        ans += "1 "
    while z:
        z -= 1
        ans += "0 "
    return ans

def main():
    n = int(input())
    s = input()

    no_z, no_n = 0, 0
    for i in s:
        if i == "n":
            no_n += 1
        elif i == "z":
            no_z += 1
    
    ans = "" + solve(no_n, no_z)
    print(ans)

if __name__ == "__main__":
    main()