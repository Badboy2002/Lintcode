class Solution {
public:
    /**
     * @param A and B: sorted integer array A and B.
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        int n=0,m,min,mark,len;
        
        for (int i=0;i<B.size();i++)
            A.push_back(B[i]);
        len=A.size();
        while (n<len)
        {
            for (m=n+1,min=A[n],mark=n;m<len;m++) //
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
        return A;
        
    }
};