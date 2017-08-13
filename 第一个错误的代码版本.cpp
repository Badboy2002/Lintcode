/**
 * class SVNRepo {
 *     public:
 *     static bool isBadVersion(int k);
 * }
 * you can use SVNRepo::isBadVersion(k) to judge whether 
 * the kth code version is bad or not.
*/
class Solution {
public:
    /**
     * @param n: An integers.
     * @return: An integer which is the first bad version.
     */
    int findFirstBadVersion(int n) {
        // write your code here
        int secA=1,secB=n,secC=secB;
       
       while (secA!=secC)
       {
           if (SVNRepo::isBadVersion(secC)==true)
           {
                if (SVNRepo::isBadVersion(secC-1)==false)
                {
                    return secC;
                }
                secB=secC;
                secC=(secA+secB)/2;
           }
           else
            {   
                secA=secC;
                secC=(secA+secB)/2;
            }
            
                
        }
          return secA;
       }
      
};
