class Solution {
    /** 
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
    int search(vector<int> &A, int target) {
        // write your code here
        int i;
        for (i=0;i<A.size();i++)
        {
            if (A[i]==target)
                return i;
        }
        return -1;
    }
};