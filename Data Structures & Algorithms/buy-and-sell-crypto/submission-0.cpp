class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=1;
        int profit=0;
        while(r<prices.size()){
            int tempProfit=prices[r]-prices[l];
            if(tempProfit<0){
                l=r;
                r++;
            }
            else{
                profit=max(tempProfit,profit);
                r++;
            }
        }
        return profit;
        
    }
};
