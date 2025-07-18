// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem66.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 *
 * https://leetcode.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (47.63%)
 * Likes:    10473
 * Dislikes: 5507
 * Total Accepted:    3M
 * Total Submissions: 6.3M
 * Testcase Example:  '[1,2,3]'
 *
 * You are given a large integer represented as an integer array digits, where
 * each digits[i] is the i^th digit of the integer. The digits are ordered from
 * most significant to least significant in left-to-right order. The large
 * integer does not contain any leading 0's.
 *
 * Increment the large integer by one and return the resulting array of
 * digits.
 *
 *
 * Example 1:
 *
 *
 * Input: digits = [1,2,3]
 * Output: [1,2,4]
 * Explanation: The array represents the integer 123.
 * Incrementing by one gives 123 + 1 = 124.
 * Thus, the result should be [1,2,4].
 *
 *
 * Example 2:
 *
 *
 * Input: digits = [4,3,2,1]
 * Output: [4,3,2,2]
 * Explanation: The array represents the integer 4321.
 * Incrementing by one gives 4321 + 1 = 4322.
 * Thus, the result should be [4,3,2,2].
 *
 *
 * Example 3:
 *
 *
 * Input: digits = [9]
 * Output: [1,0]
 * Explanation: The array represents the integer 9.
 * Incrementing by one gives 9 + 1 = 10.
 * Thus, the result should be [1,0].
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= digits.length <= 100
 * 0 <= digits[i] <= 9
 * digits does not contain any leading 0's.
 *
 *
 */

// @lc code=start
class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    int last = digits.back();
    vector<int> result;
    if (last == 9) {
      if (digits.size() > 1) {
        vector<int> front = vector<int>(digits.begin(), digits.end() - 1);
        result = plusOne(front);
      } else {
        result.insert(result.begin(), 1);
      }
      result.push_back(0);
      return result;
    }
    digits.back() += 1;
    return digits;
    // for (int i = digits.size() - 1; i >= 0; --i) {
    //   if (digits[i] < 9) {
    //     ++digits[i];
    //     return digits;
    //   }
    //   digits[i] = 0;
    // }

    // digits.insert(digits.begin(), 1);
    // return digits;
  }
}
}
;
// @lc code=end
