def main():
    y, w = input().split()
    y, w = int(y), int(w)
    num = max(y,w)
    match num:
        case 6 : print("1/6")
        case 5 : print("1/3")
        case 4 : print("1/2")
        case 3 : print("2/3")
        case 2 : print("5/6")
        case 1 : print("1/1")

if __name__ == "__main__":
    main()