def main():
    n = int(input())
    for x in range(4,n):
        if iscomposite(x):
            y = n - x
            if iscomposite(y):
                print(x,y)
                return

def iscomposite(a):
    for i in range(2,a):
        if a % i == 0:
            return True
    return False

if __name__ =="__main__":
    main()