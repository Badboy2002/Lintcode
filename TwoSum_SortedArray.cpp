class Solution {
public:
    /*
     * @param nums an array of Integer
     * @param target = nums[index1] + nums[index2]
     * @return [index1 + 1, index2 + 1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        vector<int> indices;
        if (nums.size()<=1)
            return indices;
        int n,m;
        n=0;
        m=nums.size()-1;
        while (n!=m)
        {
            if (nums[n]+nums[m]==target)
            {
                indices.push_back(n+1);
                indices.push_back(m+1);
                break;
            }
            else if (nums[n]+nums[m]>target)
            {
                m--;
            }
            else
            {
                n++;
            }
        }
        return indices;
    }
};
