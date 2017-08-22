class Solution {
public:
    /*
     * @param s: A string
     * @return: whether the string is a valid parentheses
     */
    bool isValidParentheses(string s) {
        // write your code here
       vector<char> stack;
    stack.push_back(' ');
    for (int i = 0; i < s.size(); i++) {
      char item = s[i];
      if (item == '(' || item == '[' || item == '{') {
        stack.push_back(item);
      }
      
      if (item == ')') {
        if (stack.back() != '(') {
          return false;
        }
        stack.pop_back();  
      }
      
      if (item == ']') {
        if (stack.back() != '[') {
          return false;
        }
        stack.pop_back();  
      }  
      
      if (item == '}') {
        if (stack.back() != '{') {
          return false;
        }
        stack.pop_back();  
      }    
    } 
    if (stack.back() != ' ') {
      return false;
    }
    
    return true;
        
    }
};