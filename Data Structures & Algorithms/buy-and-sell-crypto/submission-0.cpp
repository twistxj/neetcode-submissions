class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int temp = 0;
        int right=0;
        for(int a=0;a<prices.size()-1;a++){
            for(int b = a+1; b<prices.size();b++){
                temp = prices[b]-prices[a];
                if(temp>=profit){
                    profit=temp;
                }
            }
        }
        if(profit<0){
            profit=0;
        }
        return profit;
    }
};
