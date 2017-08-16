class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: An integer denotes the middle number of the array.
     */
    int median(vector<int> &nums) {
        // write your code here
        int n=1,m=nums.size();
        sort(nums.begin(),nums.end());
        return nums[(n+m)/2-1];
    }
};
