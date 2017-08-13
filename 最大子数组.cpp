class Solution {
public:    
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> nums) {
        // write your code here
        if (nums.size()==1)
            return nums[0];
        int n=0,m,Max,result,load,len;
        Max=nums[0];
        load=nums[0];
        len=nums.size();
    while (n<len)
    {
        
        for (m=n+1,result=nums[n],load=nums[n];m<len;m++) //load为过程最大量
        {
            result=result+nums[m];
            load=max (result,load);
        }
        if (load>Max) //验证最大量
            Max=load;
        n++;
    }
    return Max;
    }
    
};