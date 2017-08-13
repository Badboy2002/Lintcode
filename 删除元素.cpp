class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        vector<int> save;
        int n,m,len;
        len=A.size();
        for (n=0;n<len;n++)
        {
            if (A[n]!=elem)
            {
                m++;
                save.push_back(A[n]);
            }
        }
        A=save;
        return m;
    }
};