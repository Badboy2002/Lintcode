class Solution {
    /** 
     *@param A : an integer sorted array
     *@param target :  an integer to be inserted
     *return : a list of length 2, [index1, index2]
     */
public:
    vector<int> searchRange(vector<int> &A, int target) {
        // write your code here
        vector<int> cut;
        if (A.size()==0)
            {
                cut.push_back(-1);
                cut.push_back(-1);
                return cut;
            }
        int n;
        vector<int> save;
        for (n=0;n<A.size();n++)
        {
            if (A[n]==target)
                save.push_back(n);
        }
        if (save.size()==0)
            {
                cut.push_back(-1);
                cut.push_back(-1);
                return cut;
            }
        
        cut.push_back(save[0]);
        cut.push_back(save[save.size()-1]);
        return cut;
        
        
    }
};