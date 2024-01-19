def solve(s):
    cnt = 0
    for i in range(len(s)):
        if s[i] == "Q":
            no_of_A = 0
            for j in range(i+1,len(s)):
                if s[j] == "A":
                    no_of_A += 1
                if s[j] == "Q":
                    cnt += no_of_A
    return cnt

def main():
    n = input()
    print(solve(n))

if __name__ == "__main__":
    main()