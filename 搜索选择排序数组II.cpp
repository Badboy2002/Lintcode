﻿class Solution {
    /** 
     * param A : an integer ratated sorted array and duplicates are allowed
     * param target :  an integer to be search
     * return : a boolean 
     */
public:
    bool search(vector<int> &A, int target) {
        // write your code here
        int i,len;
        len=A.size();
        for (i=0;i<len;i++)
            if (A[i]==target)
                return true;
        return false;
    }
};