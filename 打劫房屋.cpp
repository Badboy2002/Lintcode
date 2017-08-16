class Solution {
public:
    /*
     * @param : An array of non-negative integers
     * @return: The maximum amount of money you can rob tonight
     */
    long long houseRobber(vector<int> A) {
        // write your code here
        int n=A.size();
        if (n==0)
            return 0;
        if (n==1)
            return A[0];
        long long m[n]={0};
        m[0]=A[0];
        m[1]=max (A[0],A[1]);
        int i=2;
        while (i<n)
        {
            m[i]=max (m[i-2]+A[i],m[i-1]);  //状态转移方程 
            i++;
        }
        return m[n-1];
    }
};