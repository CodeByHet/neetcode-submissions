class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=INT_MIN;
        int minprices=prices[0];
        for(int i=1;i<prices.size();i++){
            maxprofit=max(maxprofit,prices[i]-minprices);
            minprices=min(minprices,prices[i]);
        }
    if(maxprofit<0){
        return 0;
    }else{
        return maxprofit;
    }
    }
};
