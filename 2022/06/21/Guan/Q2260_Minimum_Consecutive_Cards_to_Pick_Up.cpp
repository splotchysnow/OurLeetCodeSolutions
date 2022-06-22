class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        // set<int> c;
        int size = 0;    
        map<int,int> c;
        //Use map to collect the card value and the index associated with it.
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i = 0; i < cards.size(); i++){
            //Throw the input into the set;
            //if set size dosn't increase.
            //return the ith position.
            
            // c.insert(cards[i]);
            // if(c.size() == size){
            //     return i+1;
            // }
            // else{
            //     size++;
            // }
            
            c.insert(pair<int, int>(cards[i], i));
            if(c.size() == size){
                // cout << "old card position: " << c[cards[i]] << endl;
                // cout << "new card position: " << i << endl;
                // cout << "card value: " << cards[i] << endl;
                // cout << "position difference: " << i-c[cards[i]]+1 << endl << endl;
                pq.push(i-c[cards[i]]+1);
                //Update new index i:
                c[cards[i]] = i;
            }
            else{
                size++;
            }
            
            
        }
        //Debugger:
        for(int i = 0; i < cards.size(); i++){
            if(i+5 < cards.size() && cards[i] == cards[i+5]){
                cout << cards[i] << endl;
            }
        }
        
        if(pq.size() != 0){
            return pq.top();
        }
        else{
            return -1;
        }
    }
};
