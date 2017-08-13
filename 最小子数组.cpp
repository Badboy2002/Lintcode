class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: A integer denote the sum of minimum subarray
     */
    int minSubArray(vector<int> nums) {
        // write your code here
         if (nums.size()==1)
            return nums[0];
        int n=0,m,Min,tmp,result,load,len;
        Min=nums[0];
        load=nums[0];
        len=nums.size();
    while (n<len)
    {
        
        for (m=n+1,result=nums[n],load=nums[n];m<len;m++)
        {
            result=result+nums[m];
            load=min (result,load);
        }
        if (load<Min)
            Min=load;
        n++;
    }
    return Min;
    }
};
