// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem53.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 *
 * https://leetcode.com/problems/maximum-subarray/description/
 *
 * algorithms
 * Medium (52.25%)
 * Likes:    36147
 * Dislikes: 1530
 * Total Accepted:    5.2M
 * Total Submissions: 9.9M
 * Testcase Example:  '[-2,1,-3,4,-1,2,1,-5,4]'
 *
 * Given an integer array nums, find the subarray with the largest sum, and
 * return its sum.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 * Output: 6
 * Explanation: The subarray [4,-1,2,1] has the largest sum 6.
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [1]
 * Output: 1
 * Explanation: The subarray [1] has the largest sum 1.
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [5,4,-1,7,8]
 * Output: 23
 * Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^5
 * -10^4 <= nums[i] <= 10^4
 *
 *
 *
 * Follow up: If you have figured out the O(n) solution, try coding another
 * solution using the divide and conquer approach, which is more subtle.
 *
 */

// @lc code=start
class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    // brutal, time limited
    // int maxSum{nums[0]}, window{1}, tempSum{0};
    // for (int window = 1; window <= nums.size(); ++window) {
    //   for (int startWindow = 0; startWindow <= nums.size() - window;
    //        ++startWindow) {
    //     tempSum = 0;
    //     for (int i = startWindow; i < startWindow + window; ++i) {
    //       tempSum += nums[i];
    //     }
    //     maxSum = max(tempSum, maxSum);
    //   }
    // }
    // return maxSum;
    int sum{nums[0]}, f{nums[0]};
    for (size_t i = 1; i < nums.size(); ++i) {
      f = max(f, 0) + nums[i];
      sum = max(sum, f);
    }
    return sum;
  }
};
// @lc code=end
