class Solution {
public:
    /*
     * @param : a vector of integers
     * @return: an integer
     */
    int maxArea(vector<int> heights) {
        // write your code here
        if (heights.size()==0)
        return 0;
    int left,right,area,Max=0;
    right=heights.size()-1;
    left=0;
    while (left<right)
    {
        if (heights[left]<heights[right])
        {
            area=(right-left)*heights[left];
            left++;
        }
        else
        {
            area=(right-left)*heights[right];
            right--;
        }
        Max=max (Max,area);
    }
    return Max;
    
    }
      
};