def solve(n):
    temp = []
    if n % 3 == 0:
        temp.append(n // 3)
        temp.append((n // 3) + 1)
        temp.append((n // 3) - 1)
    elif n % 3 == 1:
        temp.append((n // 3) + 1)
        temp.append((n // 3) + 2)
        temp.append((n // 3) - 2)
    else:
        temp.append((n // 3) + 1)
        temp.append((n // 3) + 2)
        temp.append((n // 3) - 1)
    
    if temp[-1] == 0:
        temp[2] += 1
        temp[0] -= 1
    return temp

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        n = int(input())
        ans.append(solve(n))
    for i in ans:
        print(i[0], i[1], i[2])

if __name__ == "__main__":
    main()