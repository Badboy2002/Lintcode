class Solution {
public:
    /**
     * @param nums a list of integer
     * @return void
     */  
    void wiggleSort(vector<int>& nums) {
        // Write your code here
        int n=0,m,min,mark,tmp;
        while (n<nums.size())
        {
            for (m=n+1,min=nums[n],mark=n;m<nums.size();m++) //??
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
        
        
        for (int i=2;i<nums.size();i=i+2)
        {
            tmp=nums[i-1];
            nums[i-1]=nums[i];
            nums[i]=tmp;
        }
    }
};