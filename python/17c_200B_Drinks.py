def main():
    n = int(input())
    per = 0.0
    drinks = input().split()
    for i in drinks:
        per += int(i)
    per = (per / (n * 100.0)) * 100.0
    print(f"{per:.7f}")

if __name__ == "__main__":
    main()