// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem8.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 *
 * https://leetcode.com/problems/string-to-integer-atoi/description/
 *
 * algorithms
 * Medium (19.34%)
 * Likes:    5483
 * Dislikes: 14857
 * Total Accepted:    2M
 * Total Submissions: 10.5M
 * Testcase Example:  '"42"'
 *
 * Implement the myAtoi(string s) function, which converts a string to a
 * 32-bit signed integer.
 *
 * The algorithm for myAtoi(string s) is as follows:
 *
 *
 * Whitespace: Ignore any leading whitespace (" ").
 * Signedness: Determine the sign by checking if the next character is '-' or
 * '+', assuming positivity if neither present.
 * Conversion: Read the integer by skipping leading zeros until a non-digit
 * character is encountered or the end of the string is reached. If no digits
 * were read, then the result is 0.
 * Rounding: If the integer is out of the 32-bit signed integer range [-2^31,
 * 2^31 - 1], then round the integer to remain in the range. Specifically,
 * integers less than -2^31 should be rounded to -2^31, and integers greater
 * than 2^31 - 1 should be rounded to 2^31 - 1.
 *
 *
 * Return the integer as the final result.
 *
 *
 * Example 1:
 *
 *
 * Input: s = "42"
 *
 * Output: 42
 *
 * Explanation:
 *
 *
 * The underlined characters are what is read in and the caret is the current
 * reader position.
 * Step 1: "42" (no characters read because there is no leading whitespace)
 * ⁠        ^
 * Step 2: "42" (no characters read because there is neither a '-' nor '+')
 * ⁠        ^
 * Step 3: "42" ("42" is read in)
 * ⁠          ^
 *
 *
 *
 * Example 2:
 *
 *
 * Input: s = " -042"
 *
 * Output: -42
 *
 * Explanation:
 *
 *
 * Step 1: "   -042" (leading whitespace is read and ignored)
 * ⁠           ^
 * Step 2: "   -042" ('-' is read, so the result should be negative)
 * ⁠            ^
 * Step 3: "   -042" ("042" is read in, leading zeros ignored in the result)
 * ⁠              ^
 *
 *
 *
 * Example 3:
 *
 *
 * Input: s = "1337c0d3"
 *
 * Output: 1337
 *
 * Explanation:
 *
 *
 * Step 1: "1337c0d3" (no characters read because there is no leading
 * whitespace)
 * ⁠        ^
 * Step 2: "1337c0d3" (no characters read because there is neither a '-' nor
 * '+')
 * ⁠        ^
 * Step 3: "1337c0d3" ("1337" is read in; reading stops because the next
 * character is a non-digit)
 * ⁠            ^
 *
 *
 *
 * Example 4:
 *
 *
 * Input: s = "0-1"
 *
 * Output: 0
 *
 * Explanation:
 *
 *
 * Step 1: "0-1" (no characters read because there is no leading whitespace)
 * ⁠        ^
 * Step 2: "0-1" (no characters read because there is neither a '-' nor '+')
 * ⁠        ^
 * Step 3: "0-1" ("0" is read in; reading stops because the next character is
 * a non-digit) ⁠         ^
 *
 *
 *
 * Example 5:
 *
 *
 * Input: s = "words and 987"
 *
 * Output: 0
 *
 * Explanation:
 *
 * Reading stops at the first non-digit character 'w'.
 *
 *
 *
 * Constraints:
 *
 *
 * 0 <= s.length <= 200
 * s consists of English letters (lower-case and upper-case), digits (0-9), '
 * ', '+', '-', and '.'.
 *
 *
 */
// @lc code=start
#include <algorithm>
class Solution {
 public:
  int myAtoi(string s) {
    bool start = false;
    char first_n = '!';
    int sign = 1;
    double n = 0;
    for (auto ch : s) {
      if (!start) {
        if (std::isalpha(ch) || ch == '.') {
          return 0;
        } else if (ch == '+' || std::isdigit(ch)) {
          start = true;
        } else if (ch == '-') {
          sign = -1;
          start = true;
        }
      }

      if (start) {
        if (std::isalpha(ch) || ch == '.') {
          break;
        }
        if (first_n == '!') {
          first_n = ch;
        } else if (!std::isalpha(first_n) &&
                   (ch == ' ' || ch == '+' || ch == '-')) {
          break;
        }
        if (std::isdigit(ch)) {
          int the_n = ch - '0';
          if (n == 0 && the_n == 0) {
            continue;
          }
          n = n * 10 + the_n;
        }
      }
    }

    n *= sign;
    if (n > INT_MAX) {
      n = INT_MAX;
    } else if (n < INT_MIN) {
      n = INT_MIN;
    }
    return (int)n;
  }
};
// @lc code=end
