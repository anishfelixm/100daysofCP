def main():
    s = input()
    t = input()
    print(func(s, t))

def func(s,t):
    temp = ""
    for k in range(len(s)-1, -1, -1):
        temp += s[k] 
    return "YES" if temp == t else "NO"

if __name__ == "__main__":
    main()