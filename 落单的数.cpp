class Solution {
public:
	/**
	 * @param A: Array of integers.
	 * return: The single number.
	 */
    int singleNumber(vector<int> &A) {
        // write your code here
        int n,x;
        x=0;
        for (n=0;n<A.size();n++)
        {
          x=x^A[n];
        }
        return x;
    }
  
};
