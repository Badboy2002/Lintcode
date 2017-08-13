class Solution {
public:
    /**
     * @param nums an integer array
     * @return nothing, do this in-place
     */
    void moveZeroes(vector<int>& nums) {
        // Write your code here
        int n=0,count=0;
        while (n<nums.size())
        {
            if (nums[n]==0)
            {
                nums.erase(nums.begin()+n);
                n=0;
                count++;
                continue;
            }
            n++;
        }
        for (n=0;n<count;n++)
        {
            nums.push_back(0);
        }
        
    }
};