class Solution {
public:
    /*
     * @param matrix: a matrix of m x n elements
     * @return: an integer list
     */
    vector<int> spiralOrder(vector<vector<int>> matrix) {
        // write your code here
        vector<int> save;
        if (matrix.size()==0)  //清除special case
            return save;
        
        int n=matrix.size(),m=matrix[0].size(); //n为竖 m为横
        int k,i=m*n;
        int a=0,b=0;
        int left=0,right=m,up=0,down=n;
        for (k=0;k<=i;)
        {
            for (;a<right;a++)   //向右
            {
                save.push_back(matrix[b][a]);
                k++;
                if (k>=i)
                    return save;
            }
            up++;
            a--;
            b++;
            
            for (;b<down;b++)   //向下
            {
                save.push_back(matrix[b][a]);
                k++;
                if (k>=i)
                    return save;
            }
            right--;
            b--;
            a--;
           
            for (;a>=left;a--)  //向左
            {
                save.push_back(matrix[b][a]);
                k++;
                if (k>=i)
                    return save;
            }
            down--;
            a++;
            b--;
            
            for (;b>=up;b--) //向上
            {
                save.push_back(matrix[b][a]);
                k++;
                if (k>=i)
                    return save;
            }
            left++;
            b++;
            a++;
        }
        
        return save;
        
    }
};