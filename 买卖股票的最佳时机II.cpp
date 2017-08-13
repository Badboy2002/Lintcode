class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        int m,difference=0,income=0;
        if (prices.size()==1||prices.size()==0)
            return income;
        for (m=0;m<prices.size()-1;m++)
        {
            difference=prices[m+1]-prices[m];
            if (difference>0)
            {
                income=income+difference;
                continue;
            }
                
        }
        return income;
    }
};