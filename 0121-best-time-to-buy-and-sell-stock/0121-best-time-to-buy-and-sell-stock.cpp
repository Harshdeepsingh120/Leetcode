class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bestbuy[100000];
        bestbuy[0]=prices[0];
        for(int i=1; i<n; i++){
            bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
        }
        int maxprofit=0;
        for(int i=0; i<n; i++){
            int curprofit=prices[i]-bestbuy[i];
            maxprofit=max(maxprofit, curprofit);
        }
        return maxprofit;
    }
};