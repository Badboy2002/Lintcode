class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        int n,m,i,count=1;
        n=nums.size();
        m=n/2;
        sort(nums.begin(),nums.end());
        for (i=0;i<n-1;i++)
        {
            if (nums[i]=nums[i+1])
            {
                count++;
                if (count>m)
                    return nums[i];
            }
            else
            {
                count=1;
            }
        }
    }
};
