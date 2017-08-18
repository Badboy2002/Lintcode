class Solution {
public:
    /**
     * @param costs n x 3 cost matrix
     * @return an integer, the minimum cost to paint all houses
     */
    int minCost(vector<vector<int>>& costs) {
        // Write your code here
        if (costs.size()==0)//清除special case
            return 0;
        int m,n;
        m=costs[0].size();  //m是横长
        n=costs.size();  //n是竖宽
        int dp[n][3];
        dp[0][0]=costs[0][0];  
        dp[0][1]=costs[0][1]; 
        dp[0][2]=costs[0][2]; //初始化矩阵
        
        int a,b;
        for (a=1;a<n;a++)
        {
            b=0;
            dp[a][b]=min (dp[a-1][b+1],dp[a-1][b+2]) + costs[a][b]; /*状态转移方程*/
            b=1;
            dp[a][b]=min (dp[a-1][b-1],dp[a-1][b+1]) + costs[a][b];
            b=2;
            dp[a][b]=min (dp[a-1][b-2],dp[a-1][b-1]) + costs[a][b];
        }
        int Min=0;
        Min=min (dp[n-1][0],dp[n-1][1]);
        Min=min (Min,dp[n-1][2]);
        return Min;
    }
};