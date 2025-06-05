// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem20.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (42.25%)
 * Likes:    25796
 * Dislikes: 1880
 * Total Accepted:    6.1M
 * Total Submissions: 14.4M
 * Testcase Example:  '"()"'
 *
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 *
 * An input string is valid if:
 *
 *
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * Every close bracket has a corresponding open bracket of the same type.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: s = "()"
 *
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: s = "()[]{}"
 *
 * Output: true
 *
 *
 * Example 3:
 *
 *
 * Input: s = "(]"
 *
 * Output: false
 *
 *
 * Example 4:
 *
 *
 * Input: s = "([])"
 *
 * Output: true
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 10^4
 * s consists of parentheses only '()[]{}'.
 *
 *
 */

// @lc code=start
#include <map>
#include <set>
#include <stack>
#include <string>

class Solution {
 public:
  bool isValid(string s) {
    std::map<char, char> pairs = {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };
    std::stack<char> col = {};
    std::set<char> backBrackets;
    for (const auto& pair : pairs) backBrackets.insert(pair.first);

    for (const auto& ch : s) {
      if (backBrackets.find(ch) == backBrackets.end()) {
        col.push(ch);
      } else {
        if (col.size() == 0)  // } ) ] start
          return false;

        if (pairs.at(ch) == col.top())
          col.pop();
        else
          return false;
      }
    }
    if (col.size() != 0) return false;
    return true;
  }
};
// @lc code=end
