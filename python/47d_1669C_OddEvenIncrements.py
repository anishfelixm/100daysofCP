def solve(arr, n):
    even_par, odd_par = int(arr[0]) % 2, int(arr[1]) % 2
    for i in range(2, n):
        if i % 2 == 0:
            if int(arr[i]) % 2 != even_par:
                return "NO"
        else:
            if int(arr[i]) % 2 != odd_par:
                return "NO"
    return "YES"

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        ans.append(solve(arr, n))
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()