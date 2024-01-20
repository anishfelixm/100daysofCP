def get_board():
    board = []
    for _ in range(8):
        nxt = list(input())
        board.append(nxt)
    return board

def solve(board):
    for i in range(1,7):
        for j in range(1,7):
            if board[i][j] == "#":
                if board[i-1][j-1] == "#" and board[i-1][j+1] == "#" and board[i+1][j-1] == "#" and board[i+1][j+1] == "#":
                    return [i+1, j+1]
    return [-1]

def main():
    ans = []
    t = int(input())
    for _ in range(t):
        line = input()
        board = get_board()
        ans.append(solve(board))
        
    for i in ans:
        print(i[0], i[1])

if __name__ == "__main__":
    main()