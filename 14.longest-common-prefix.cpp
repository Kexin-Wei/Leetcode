// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem14.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (45.38%)
 * Likes:    19195
 * Dislikes: 4730
 * Total Accepted:    4.5M
 * Total Submissions: 10M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 *
 * If there is no common prefix, return an empty string "".
 *
 *
 * Example 1:
 *
 *
 * Input: strs = ["flower","flow","flight"]
 * Output: "fl"
 *
 *
 * Example 2:
 *
 *
 * Input: strs = ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= strs.length <= 200
 * 0 <= strs[i].length <= 200
 * strs[i] consists of only lowercase English letters if it is non-empty.
 *
 *
 */

// @lc code=start
class Solution {
 public:
  string longestCommonPrefix(vector<string> &strs) {
    string common = strs[0];
    for (int index = 0; index < strs.size(); index++) {
      if (index == 0) {
        continue;
      }
      while (common.size() > 0) {
        if (strs[index].substr(0, common.size()) == common) break;  // found
        common.pop_back();
      }
    }
    return common;
  }
};
// @lc code=end
