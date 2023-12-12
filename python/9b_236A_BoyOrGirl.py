def main():
    name = input()
    count = len(set(name))
    if count % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")

if __name__ == "__main__":
    main()