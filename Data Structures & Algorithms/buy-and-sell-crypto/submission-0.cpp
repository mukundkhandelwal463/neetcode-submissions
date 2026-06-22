class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxpri = 0;
        int minpri=INT_MAX;
        for(int i=0;i<n;i++){
            if(prices[i]<minpri){
                minpri=prices[i];
            }
            else if (prices[i] - minpri > maxpri) {
                maxpri = prices[i] - minpri;
            }
        }
        return maxpri;

        
    }
};