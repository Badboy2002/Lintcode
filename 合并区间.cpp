class Solution {
public:
  /**
   * @param intervals: interval list.
   * @return: A new interval list.
   */
  static bool cmp(const Interval &a, const Interval &b) {
    return (a.start < b.start);
  }
  
  vector<Interval> merge(vector<Interval>& intervals) {
    // write your code here
    vector<Interval> ans;
    if (intervals.empty()) {
      return ans;
    } 
    
    sort(intervals.begin(), intervals.end(), cmp);
    ans.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) { 
      if (ans.back().end >= intervals[i].start) { 
        ans.back().end = max(ans.back().end, intervals[i].end);
      } else { 
        ans.push_back(intervals[i]);
      } 
    } 
    return ans;  
  }
};