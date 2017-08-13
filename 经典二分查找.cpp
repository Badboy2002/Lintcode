class Solution {
public:
    /**
     * @param A an integer array sorted in ascending order
     * @param target an integer
     * @return an integer
     */
    int findPosition(vector<int>& A, int target) {
        // Write your code here
        if (A.size()==0)
            return -1;
        int secA,secB,secC;
        secA=1;
        secB=A.size()-1;
        secC=(secA+secB)/2;
        if (target<A[0]||target>A[secB])
            return -1;
        while (secA!=secC)
        {
            if (A[secC]==target)
                return secC;
            else if (A[secC]>target)
            {
                secB=secC;
                secC=(secA+secB)/2;
            }
            else if (A[secC]<target)
            {
                secA=secC;
                secC=(secA+secB)/2;
            }
        }
        return -1;
    }
};

