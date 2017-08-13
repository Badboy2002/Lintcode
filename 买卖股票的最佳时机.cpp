class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
          if (prices.size()==0||prices.size()==1)
            return 0;
        int n,max=0,cur,tmp;
        cur=prices[0];
        for (n=0;n<prices.size();n++)
        {
            if (prices[n]<cur)
            {
                cur=prices[n];
            }
            else 
            {
                tmp=prices[n]-cur;
                if (tmp>max)
                    max=tmp;
                
            }
        }
        return max;
    }
};
