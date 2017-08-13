class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int> A) {
        // write your code here
        int m;
        for (m=1;m<A.size();m++)
        {
            if (A[m]>A[m+1]&&A[m]>A[m-1])
            {
                 return m;
            }
        }
    }
};
