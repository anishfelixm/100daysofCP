def main():
    ans = []
    t = int(input())
    for _ in range(t):
        even_out_of_place, odd_out_of_place = 0, 0
        n = int(input())
        array = input().split()
        for i in range(n):
            array[i] = int(array[i])
            if i % 2 == 0:
                if array[i] % 2 != 0:
                    even_out_of_place += 1
            else:
                if array[i] % 2 != 1:
                    odd_out_of_place += 1
        if even_out_of_place != odd_out_of_place:
            ans.append(-1)
        else:
            ans.append(even_out_of_place)
    for i in ans:
        print(i)

if __name__ == "__main__":
    main()