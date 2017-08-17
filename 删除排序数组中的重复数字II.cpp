class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int n,m,mark;
        int cut=0;
        vector<int> save;
        n=nums.size();
        if (n==0)  //special case
        {
            return 0;
        }
        m=0;
        save.push_back(nums[0]);
        while (m<n)
        {
          if (nums[m]==nums[m+1])
          {
              if (cut==0)
              {
                cut=1;
                save.push_back(nums[m+1]);
                m++;
                continue;
              }
              else
              {
                  m++;
                  continue;
              }
          }
          if (nums[m]!=nums[m+1])
          {
              cut=0;
              save.push_back(nums[m+1]);
              m++;
              continue;
          }
          
          
        }
        nums=save;
        nums.pop_back();
        return nums.size();
        
    }
};