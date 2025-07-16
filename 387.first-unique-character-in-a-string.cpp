// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem387.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 *
 * https://leetcode.com/problems/first-unique-character-in-a-string/description/
 *
 * algorithms
 * Easy (63.79%)
 * Likes:    9362
 * Dislikes: 314
 * Total Accepted:    2.1M
 * Total Submissions: 3.2M
 * Testcase Example:  '"leetcode"'
 *
 * Given a string s, find the first non-repeating character in it and return
 * its index. If it does not exist, return -1.
 *
 *
 * Example 1:
 *
 *
 * Input: s = "leetcode"
 *
 * Output: 0
 *
 * Explanation:
 *
 * The character 'l' at index 0 is the first character that does not occur at
 * any other index.
 *
 *
 * Example 2:
 *
 *
 * Input: s = "loveleetcode"
 *
 * Output: 2
 *
 *
 * Example 3:
 *
 *
 * Input: s = "aabb"
 *
 * Output: -1
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 10^5
 * s consists of only lowercase English letters.
 *
 *
 */

// @lc code=start
#include <unordered_map>
class Solution {
 public:
  int firstUniqChar(string s) {
    std::unordered_map<char, int> char_to_count;
    for (size_t i = 0; i < s.size(); ++i) {
      char_to_count[s[i]]++;
    }
    for (auto ch : s) {
      if (char_to_count[ch] == 1) {
        return s.find(ch);
      }
    }
    return -1;
  }
};
// @lc code=end
