class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: The boolean answer
     */
    bool canJump(vector<int> A) {
        // write you code here
        int pos=0;
        while (pos<A.size()-1)
        {  
          if (A[pos]!=0)
          {
              pos=pos+A[pos];
              continue;
          }
          else
          {
              pos--;
              while (A[pos+A[pos]]==0)
              {
                  pos--;
                if (pos<=-1)
                    return false;
              }
               if (pos<=-1)
                    return false;
          }
        }
        return true;
    }
};
