class Solution {
public:
    /**
     * @param A an integer array
     * @return void
     */
    void sortIntegers(vector<int>& A) {
        // Write your code here
        int n=0,m,len,min,mark;
        len=A.size();
        while (n<len)
        {
            for (m=n+1,min=A[n],mark=n;m<len;m++) //??Dò
            {
                if (min<=A[m])
                {
                    ;
                }
                else 
                {
                    min=A[m];
                    mark=m;
                }
            }
            A[mark]=A[n];
            A[n]=min;
            n++;
        }
    }
};