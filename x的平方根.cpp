class Solution {
public:
    /*
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        if (x<0)
            return 0;
        long i;
        for (i=0;i*i<=x;i++)
        {
            if (i*i<=x&&(i+1)*(i+1)>x)
                return i;
        }
        return i;
    }
};