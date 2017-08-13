class Solution {
public:
    /**
     * @param x the base number
     * @param n the power number
     * @return the result
     */
    double myPow(double x, int n) {
        // Write your code here
        int m;
        double tmp=x;
        if (n==0)
            return 1;
        if (n>0)
        {
            for (m=0;m<n-1;m++)
            {
                x=x*tmp;
            }
        }
        else if (n<0)
        {
            for (m=0;m>n+1;m--)
            {
                x=x*tmp;
            }
            x=1.0/x;
        }
        
        return x;
    }
};