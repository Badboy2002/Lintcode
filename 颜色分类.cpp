class Solution{
public:
    /**
     * @param nums: A list of integer which is 0, 1 or 2 
     * @return: nothing
     */    
    void sortColors(vector<int> &nums) {
        // write your code here
         int n=0,m,min,mark,tmp;
        while (n<nums.size())
        {
            for (m=n+1,min=nums[n],mark=n;m<nums.size();m++) //排序
            {
                if (min<=nums[m])
                {
                    ;
                }
                else 
                {
                    min=nums[m];
                    mark=m;
                }
            }
            nums[mark]=nums[n];
            nums[n]=min;
            n++;
        }
        
    }
};