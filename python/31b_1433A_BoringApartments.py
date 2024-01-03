from math import log10 as log;
def main():
    ans = []
    t = int(input())
    for _ in range(t):
        x = int(input())
        dig, num = 0, int(log(x)) + 1
        dig = dig + (10 * ((x % 10) - 1)) + ((num * (1 + num)) // 2)
        ans.append(dig)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()