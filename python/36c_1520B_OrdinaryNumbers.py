from math import log10 as log

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        k = int(log(n) + 1)
        cnt = 0 + (9 * (k -1))
        next_numb = ""
        for i in range(k):
            next_numb += "1"
        next_numb = int(next_numb)
        for j in range(next_numb, n + 1, next_numb):
            cnt += 1
        ans.append(cnt)
    for i in ans:
        print(i)
    
if  __name__ == "__main__":
    main()