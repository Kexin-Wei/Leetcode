/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (54.31%)
 * Likes:    59029
 * Dislikes: 2110
 * Total Accepted:    15.3M
 * Total Submissions: 28.2M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers nums and an integer target, return indices of the
 * two numbers such that they add up to target.
 *
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 *
 * You can return the answer in any order.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 *
 *
 *
 * Constraints:
 *
 *
 * 2 <= nums.length <= 10^4
 * -10^9 <= nums[i] <= 10^9
 * -10^9 <= target <= 10^9
 * Only one valid answer exists.
 *
 *
 *
 * Follow-up: Can you come up with an algorithm that is less than O(n^2) time
 * complexity?
 */

// @lc code=start
#include <unordered_map>
class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    // for (int i = 0; i < nums.size(); i++) {
    //   for (int j = i + 1; j < nums.size(); j++) {
    //     if (i == j) continue;
    //     if (nums[i] + nums[j] == target) return {i, j};
    //   }
    // }
    // return {};
    std::unordered_map<int, int> num_to_index;
    for (int i = 0; i < nums.size(); ++i) {
      int fd = target - nums[i];
      if (num_to_index.contains(fd)) {
        return {num_to_index[fd], i};
      }
      num_to_index[nums[i]] = i;
    }
    return {};
  }
};
// @lc code=end

