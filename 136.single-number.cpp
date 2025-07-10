// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem136.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 *
 * https://leetcode.com/problems/single-number/description/
 *
 * algorithms
 * Easy (76.11%)
 * Likes:    17725
 * Dislikes: 822
 * Total Accepted:    3.8M
 * Total Submissions: 5M
 * Testcase Example:  '[2,2,1]'
 *
 * Given a non-empty array of integers nums, every element appears twice except
 * for one. Find that single one.
 *
 * You must implement a solution with a linear runtime complexity and use only
 * constant extra space.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [2,2,1]
 *
 * Output: 1
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [4,1,2,1,2]
 *
 * Output: 4
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [1]
 *
 * Output: 1
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 3 * 10^4
 * -3 * 10^4 <= nums[i] <= 3 * 10^4
 * Each element in the array appears twice except for one element which appears
 * only once.
 *
 *
 */

// @lc code=start
#include <algorithm>
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    // method 1
    // Your runtime beats 18.17 % of cpp submissions
    // Your memory usage beats 58.24 % of cpp submissions (20.7 MB)
    // if (nums.size() == 1) {
    //   return nums[0];
    // }
    // std::sort(nums.begin(), nums.end());
    // for (size_t i = 1; i < nums.size() - 1; ++i) {
    //   if (i == 1 && nums[i - 1] != nums[i]) {
    //     return nums[0];
    //   }
    //   if (nums[i - 1] != nums[i] && nums[i] != nums[i + 1]) {
    //     return nums[i];
    //   }
    //   if (i == (nums.size() - 2) && nums[i] != nums[i + 1]) {
    //     return nums[i + 1];
    //   }
    // }
    // return 0;
    // method 2
    // Your runtime beats 8.47 % of cpp submissions
    // Your memory usage beats 5.08 % of cpp submissions (24.4 MB)
    // if (nums.size() == 1) return nums[0];
    // std::set<int> wait;
    // for (const auto& a : nums) {
    //   if (wait.contains(a)) {
    //     wait.erase(a);
    //   } else {
    //     wait.insert(a);
    //   }
    // }
    // return *wait.begin();
    int ans = 0;
    for (const int num : nums) ans ^= num;
    return ans;
  }
};
// @lc code=end
