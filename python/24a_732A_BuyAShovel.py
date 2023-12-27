def main():
    k, r = input().split()
    k, r = int(k), int(r)
    temp = k % 10
    for i in range(1,10):
        if (temp * i) % 10 == r or (temp * i) % 10 == 0:
            print(i)
            return
        
if __name__ == "__main__":
    main()