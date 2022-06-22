// You are given an integer array cards where cards[i] represents the value of the ith card. A pair of cards are matching if the cards have the same value.

// Return the minimum number of consecutive cards you have to pick up to have a pair of matching cards among the picked cards. If it is impossible to have matching cards, return -1.

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        //store the previous index of cards
        unordered_map<int, int> cardIndex;   
        int minLength = INT_MAX
        for(int i = 0; i<cards.size(); i++){
            if(cardIndex.count(cards[i])){
                minLength = min(minLength,i-cardIndex[cards[i]]+1);
            }
                cardIndex[cards[i]] = i;
        }
        if (minLength==INT_MAX)return -1;
        return minLength;
    }
};