class Solution {
public:
    /**
     * @param A: A list of lists of integers
     * @return: An integer
     */
    int jump(vector<int> A) {
        // wirte your code here
        int n=0,m,len,max=0,tmp=0,jumps=0;
        len=A.size();
        while (n<len)
        {
            if (n+A[n]>=len-1)
                return jumps+1;
            m=n+1;
            while (m<=A[n])
            {
                tmp=A[n]+A[m];
                if (max<=tmp)
                max=tmp;
                m++;
            }
            n=n+max;
            jumps=jumps+2;
        }
        return jumps;
    }
};