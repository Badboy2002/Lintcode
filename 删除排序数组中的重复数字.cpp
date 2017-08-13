class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int n,m,mark;
        int cut;
        for (n=0;n<nums.size();n++)
        {
            for (m=n+1;m<nums.size();)
            {
                
                if (nums[n]==nums[m])
                {
                    nums.erase(nums.begin()+m);
                    continue; //避免移位
                }
                
                else
                {
                    break;
                }
                
            }
        }
        return nums.size();
    }
};