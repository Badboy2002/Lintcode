class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        if (array.size()==0)
            return -1;
        int secA,secB,secC;
        secA=0;
        secB=array.size()-1;
        secC=(secA+secB)/2;
        if (target<array[0]||target>array[secB])
            return -1;
        if (target==array[0])
            return 0;
        if (target==array[secB])
            return secB;
        while (secA!=secC)
        {
            if (array[secC]==target)
                {
                    while (1)
                    {
                        if (array[secC]==array[secC-1])
                            secC--;
                        else break;
                    }
                    return secC;
                }
            else if (array[secC]>target)
            {
                secB=secC;
                secC=(secA+secB)/2;
            }
            else if (array[secC]<target)
            {
                secA=secC;
                secC=(secA+secB)/2;
            }
        }
        return -1;
    }
};