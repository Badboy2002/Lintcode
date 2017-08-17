class Solution {
public:
    /**
     * @param grid: a list of lists of integers.
     * @return: An integer, minimizes the sum of all numbers along its path
     */
    int minPathSum(vector<vector<int> > &grid) {
        // write your code here
        int n,m;  //m为长 n为宽
        m=grid[0].size();
        n=grid.size();
        int dp[n][m];
        int a,b;
        dp[0][0]=grid[0][0];
        for (a = 1;a < m;a++)   //a为横长
        {
            dp[0][a]=dp[0][a-1] + grid[0][a];  /*动态规划初始化:填充第一列和第一行*/
        }
        for (b = 1;b < n;b++)  //b为竖宽
        {
            dp[b][0]=dp[b-1][0] + grid[b][0];
        }
        
        for (b = 1;b < n;b++)
            for (a = 1;a < m;a++)
                dp[b][a]=min(dp[b-1][a],dp[b][a-1]) + grid[b][a];  //状态转移方程
        
        return dp[n-1][m-1];
        
    }
};
