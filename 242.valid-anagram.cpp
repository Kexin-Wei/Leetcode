/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (66.76%)
 * Likes:    13227
 * Dislikes: 437
 * Total Accepted:    5M
 * Total Submissions: 7.4M
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t, return true if t is an anagram of s, and false
 * otherwise.
 *
 *
 * Example 1:
 *
 *
 * Input: s = "anagram", t = "nagaram"
 *
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: s = "rat", t = "car"
 *
 * Output: false
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length, t.length <= 5 * 10^4
 * s and t consist of lowercase English letters.
 *
 *
 *
 * Follow up: What if the inputs contain Unicode characters? How would you
 * adapt your solution to such a case?
 *
 */

// @lc code=start
#include <unordered_map>
class Solution {
 public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
      return false;
    }
    std::unordered_map<char, int> s_t_diff;
    for (int i = 0; i < s.size(); ++i) {
      s_t_diff[s[i]]++;
      s_t_diff[t[i]]--;
    }
    for (auto m : s_t_diff) {
      if (m.second != 0) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end
