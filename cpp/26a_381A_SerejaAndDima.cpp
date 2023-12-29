#include<bits/stdc++.h>

int main(){
    int n, temp, sereja = 0, dima = 0;
    std::vector<int> cards;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        cards.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(cards[0] > cards[cards.size() - 1]){
                sereja += cards[0];
                cards.erase(cards.begin(), cards.begin() + 1);
            }
            else {
                sereja += cards[cards.size() - 1];
                cards.erase(cards.end() - 1, cards.end());
            }
        }
        else{
            if(cards[0] > cards[cards.size() - 1]){
                dima += cards[0];
                cards.erase(cards.begin(), cards.begin() + 1);
            }
            else {
                dima += cards[cards.size() - 1];
                cards.erase(cards.end() - 1, cards.end());
            }
        }
    }
    std::cout<<sereja<<" "<<dima;
    return 0;
}