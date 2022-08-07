class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j:accounts[i]){
                sum+=j;
            }
            max_wealth=max(sum,max_wealth);
        }
        return max_wealth;
    }
};