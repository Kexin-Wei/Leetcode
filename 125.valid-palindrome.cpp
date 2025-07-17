// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem125.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 *
 * https://leetcode.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (51.12%)
 * Likes:    10540
 * Dislikes: 8564
 * Total Accepted:    4.4M
 * Total Submissions: 8.6M
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * A phrase is a palindrome if, after converting all uppercase letters into
 * lowercase letters and removing all non-alphanumeric characters, it reads the
 * same forward and backward. Alphanumeric characters include letters and
 * numbers.
 *
 * Given a string s, return true if it is a palindrome, or false otherwise.
 *
 *
 * Example 1:
 *
 *
 * Input: s = "A man, a plan, a canal: Panama"
 * Output: true
 * Explanation: "amanaplanacanalpanama" is a palindrome.
 *
 *
 * Example 2:
 *
 *
 * Input: s = "race a car"
 * Output: false
 * Explanation: "raceacar" is not a palindrome.
 *
 *
 * Example 3:
 *
 *
 * Input: s = " "
 * Output: true
 * Explanation: s is an empty string "" after removing non-alphanumeric
 * characters.
 * Since an empty string reads the same forward and backward, it is a
 * palindrome.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 2 * 10^5
 * s consists only of printable ASCII characters.
 *
 *
 */

// @lc code=start
#include <algorithm>
class Solution {
 public:
  bool isPalindrome(string s) {
    // solution
    // Your runtime beats 32.09 % of cpp submissions
    // Your memory usage beats 79.43 % of cpp submissions (9.9 MB)
    int i = 0;
    int j = s.size() - 1;
    while (i < j) {
      while (!std::isalpha(s[i]) && !std::isdigit(s[i]) && i < s.size()) {
        ++i;
      }
      while (!std::isalpha(s[j]) && !std::isdigit(s[j]) && j > 0) {
        --j;
      }
      if (i >= j) return true;
      char first = to_lower(s[i]);
      char second = to_lower(s[j]);
      if (first != second) {
        return false;
      }
      ++i;
      --j;
    }
    return true;
  }

  char to_lower(char ch) {
    return static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
  }
};
// @lc code=end
