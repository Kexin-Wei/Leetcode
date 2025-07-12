// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem283.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (62.86%)
 * Likes:    18077
 * Dislikes: 532
 * Total Accepted:    4.2M
 * Total Submissions: 6.6M
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an integer array nums, move all 0's to the end of it while maintaining
 * the relative order of the non-zero elements.
 *
 * Note that you must do this in-place without making a copy of the array.
 *
 *
 * Example 1:
 * Input: nums = [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * Example 2:
 * Input: nums = [0]
 * Output: [0]
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^4
 * -2^31 <= nums[i] <= 2^31 - 1
 *
 *
 *
 * Follow up: Could you minimize the total number of operations done?
 */

// @lc code=start
#include <vector>
class Solution {
 public:
  void moveZeroes(std::vector<int>& nums) {
    int n_moved_zeros = 0;
    std::vector<int>::iterator it = nums.begin();
    for (; it != nums.end();) {
      if (*it == 0) {
        if (n_moved_zeros >= nums.size()) {
          return;
        }
        if (it == nums.end() - n_moved_zeros) {
          return;
        }
        nums.push_back(0);
        nums.erase(it);
        n_moved_zeros++;
        continue;
      }
      it++;
    }
  }
};
// @lc code=end
