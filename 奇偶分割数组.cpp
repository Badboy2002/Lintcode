class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: nothing
     */
    void partitionArray(vector<int> &nums) {
        // write your code here
        int tmp,len,n,m,min,mark;
        vector<int> odd;
        vector<int> even;
        len=nums.size();
        for (n=0;n<len;n++)
        {
            if (nums[n]%2==1)
                odd.push_back(nums[n]);
            else if (nums[n]%2==0)
                even.push_back(nums[n]);
        }
        
        for (m=0;m<odd.size();m++)
        {
            nums[m]=odd[m];
        }
        
        for (n=0;n<even.size();m++,n++)
        {
            nums[m]=even[n];
        }
    }
};