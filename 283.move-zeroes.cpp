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
    int n_zeros = 0;
    for (vector<int>::iterator it = nums.begin(); it != nums.end();) {
      if (*it == 0) {
        nums.erase(it);
        ++n_zeros;
      } else {
        ++it;
      }
    }
    nums.insert(nums.end(), n_zeros, 0);
    // Initialize a pointer `lastNonZeroFoundAt` to keep track of the position
    // of the last non-zero element found.
    // int lastNonZeroFoundAt = -1;
    // // Get the size of the input vector `nums`.
    // int n = nums.size();

    // // Iterate over the vector.
    // for (int currentIndex = 0; currentIndex < n; ++currentIndex) {
    //   // Check if the current element is non-zero.
    //   if (nums[currentIndex] != 0) {
    //     // Increment `lastNonZeroFoundAt` and swap the current element with
    //     the
    //     // element at the `lastNonZeroFoundAt` index. This moves all non-zero
    //     // elements to the front of the array in their original order.
    //     swap(nums[++lastNonZeroFoundAt], nums[currentIndex]);
    //   }
    //   // If the current element is zero, nothing needs to be done; continue
    //   to
    //   // the next iteration.
    // }
  }
};
// @lc code=end
