class Solution {
public:
    /**
     * @param A, B: Two integer arrays.
     * @return: Their smallest difference.
     */
    int smallestDifference(vector<int> &A, vector<int> &B) {
        // write your code here
        int diff = 0x7fffffff;
        int la = A.size();
        set<int> s;
        for (int i = 0; i < la; ++i)
               s.insert(A[i]);

        int lb = B.size();
        for (int i = 0; i < lb; ++i) {
            set<int>::iterator it = s.lower_bound(B[i]);
            if (it != s.end())
                diff = min(diff, *it - B[i]);
            if (it != s.begin()) {
                it --;
                diff = min(diff, B[i] - *it);
            }
        }
        return diff;

    }
};
