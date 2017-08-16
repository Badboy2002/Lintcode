class Solution {
public:
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        vector<string> save;
        int n=dictionary.size();
        int m,Max;
        for (m=0,Max=0;m<n;m++)
        {
            if (Max<=dictionary[m].size())
            {
                Max=dictionary[m].size();
            }
        }
        
        for (m=0;m<n;m++)
        {
            if (dictionary[m].size()==Max)
                save.push_back(dictionary[m]);
        }
        return save;

        
    }
};