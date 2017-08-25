class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        int n,m,len;
        len=nums.size();
        for (n=0;n<len;n++)
        {
            for (m=n+1;m<len;m++)
                {
                    if (nums[n]+nums[m]==target)
                        {
                            vector<int> a;
                            a.push_back(n+1);
                            a.push_back(m+1);
                            return a;
                        } 
                }
        }
        
    }
};
