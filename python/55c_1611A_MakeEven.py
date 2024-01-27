from math import log10

def solve(n):
    if n % 2 == 0:
        return 0
    f_even, temp = -1, n
    while temp > 0:
        k = temp % 10
        if k % 2 == 0:
            f_even = int(log10(temp)) + 1
        # print(k, temp, f_even)
        temp //= 10
    if f_even == -1:
        return -1
    elif f_even == 1:
        return 1
    else:
        return 2
    
def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        ans.append(solve(n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()