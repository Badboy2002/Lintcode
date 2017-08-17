class Solution {
public:
    /*
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // write your code here
       if(string == NULL && length <= 0)
            return 0;

        /*originalLength 为字符串string的实际长度*/
        int originalLength = 0;
        int numberOfBlank = 0;
        int i = 0;
        while(string[i] != '\0')
        {
            ++ originalLength;
    
            if(string[i] == ' ')
                ++ numberOfBlank;
    
            ++ i;
        }

        /*newLength 为把空格替换成'%20'之后的长度*/
        int newLength = originalLength + numberOfBlank * 2;

        int indexOfOriginal = originalLength;
        int indexOfNew = newLength;
        while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
        {
            if(string[indexOfOriginal] == ' ')
            {
                string[indexOfNew --] = '0';
                string[indexOfNew --] = '2';
                string[indexOfNew --] = '%';
            }
            else
            {
                string[indexOfNew --] = string[indexOfOriginal];
            }
    
            -- indexOfOriginal;
        }
        return newLength;
    }
};