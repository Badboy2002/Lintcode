class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A & V: Given n items with size A[i] and value V[i]
     * @return: The maximum value
     */
    int backPackII(int m, vector<int> A, vector<int> V) {
        // write your code here
        int n=A.size();
        int Max[n][m];
        int x,y;
        int j,k;
        for (x=0;x<n;x++)  //矩阵初始化为0
            for (y=0;y<m;y++)
                Max[x][y]=0;
        
        for (x=0;x<m;x++)  //填充最后一列
            if (x+1>=A[n-1])
                Max[n-1][x]=V[n-1];
        j=n-2;
      while (j>=0)  //控制行
      {
          for (k=0;k<m;k++)  //控制列
          {
              if (k+1<A[j])
                Max[j][k]=Max[j+1][k];
              else
              {
                  Max[j][k]=max (Max[j+1][k-A[j]]+V[j],Max[j+1][k]);
              }
          }
          j--;
      }
      return Max[0][m-1];
    }
};