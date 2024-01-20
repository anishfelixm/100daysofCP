#include<bits/stdc++.h>

std::vector<std::vector<char>> get_board(){
    std::vector<std::vector<char>> board;
    std::string nxt_line;
    for(int i = 0; i < 8; i++){
        std::cin>>nxt_line;
        std::vector<char> nxt;
        for(auto j : nxt_line){
            nxt.push_back(j);
        }
        board.push_back(nxt);
    }
    return board;
}

std::vector<int> solve(std::vector<std::vector<char>> board){
    int r = 0, c = 0;
    for(int i = 1; i < 7; i++){
        for(int j = 1; j < 7; j++){
            if (board[i][j] == '#'){
                if(board[i-1][j-1] == '#' && board[i-1][j+1] == '#' && board[i+1][j-1] == '#' && board[i+1][j+1] == '#'){
                    r = i + 1, c = j + 1;
                    return {r, c};
                }
            }
        }
    }
    return {-1};
}

int main(){
    int t;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::vector<std::vector<char>> chess_board;
        chess_board = get_board();
        ans.push_back(solve(chess_board));
    }
    for(auto i : ans){
        std::cout<<i[0]<<" "<<i[1]<<"\n";
    }
    return 0;
}