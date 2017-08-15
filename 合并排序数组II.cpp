class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        vector<int> save;
        int i,len,min,mark;
        for (i=0;i<m;i++)
            save.push_back(A[i]);
        for (i=0;i<n;i++)
            save.push_back(B[i]);
        sort(save.begin(),save.end());
        len=save.size();
        for (i=0;i<len;i++)
            A[i]=save[i];
    }
};