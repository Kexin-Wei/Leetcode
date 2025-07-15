// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem7.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Medium (30.40%)
 * Likes:    14316
 * Dislikes: 13804
 * Total Accepted:    4.2M
 * Total Submissions: 13.7M
 * Testcase Example:  '123'
 *
 * Given a signed 32-bit integer x, return x with its digits reversed. If
 * reversing x causes the value to go outside the signed 32-bit integer range
 * [-2^31, 2^31 - 1], then return 0.
 *
 * Assume the environment does not allow you to store 64-bit integers (signed
 * or unsigned).
 *
 *
 * Example 1:
 *
 *
 * Input: x = 123
 * Output: 321
 *
 *
 * Example 2:
 *
 *
 * Input: x = -123
 * Output: -321
 *
 *
 * Example 3:
 *
 *
 * Input: x = 120
 * Output: 21
 *
 *
 *
 * Constraints:
 *
 *
 * -2^31 <= x <= 2^31 - 1
 *
 *
 */

// @lc code=start
#include <vector>
class Solution {
 public:
  int reverse(int x) {
    if (x == 0 || x > INT_MAX || x <= INT_MIN) {
      return 0;
    }
    if (x < 0) {
      return -reverse(-x);
    }

    double y = 0;
    while (x > 0) {
      y = y * 10 + x % 10;
      x /= 10;
    }
    if (y > INT_MAX) return 0;
    return (int)y;
  }
};
// @lc code=end
