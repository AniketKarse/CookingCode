class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit = 0;
       int maxDif = prices[0];
       for(int i=0;i<prices.size();i++){
        if(prices[i] < maxDif) maxDif = prices[i];
        else if(prices[i] - maxDif > profit ) profit =  prices[i] - maxDif;
       }
       return profit;
    }
    
};
