// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem344.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 *
 * https://leetcode.com/problems/reverse-string/description/
 *
 * algorithms
 * Easy (79.83%)
 * Likes:    9071
 * Dislikes: 1200
 * Total Accepted:    3.3M
 * Total Submissions: 4.1M
 * Testcase Example:  '["h","e","l","l","o"]'
 *
 * Write a function that reverses a string. The input string is given as an
 * array of characters s.
 *
 * You must do this by modifying the input array in-place with O(1) extra
 * memory.
 *
 *
 * Example 1:
 * Input: s = ["h","e","l","l","o"]
 * Output: ["o","l","l","e","h"]
 * Example 2:
 * Input: s = ["H","a","n","n","a","h"]
 * Output: ["h","a","n","n","a","H"]
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 10^5
 * s[i] is a printable ascii character.
 *
 *
 */

// @lc code=start
#include <vector>

class Solution {
 public:
  void reverseString(vector<char>& s) {
    vector<char>::iterator front = s.begin();
    vector<char>::iterator back = s.end() - 1;
    while (front <= back) {
      char temp = *front;
      *front = *back;
      *back = temp;
      ++front;
      --back;
    }
  }
};
// @lc code=end
