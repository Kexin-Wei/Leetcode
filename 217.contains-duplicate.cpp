// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem217.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * algorithms
 * Easy (63.30%)
 * Likes:    12990
 * Dislikes: 1332
 * Total Accepted:    5.3M
 * Total Submissions: 8.3M
 * Testcase Example:  '[1,2,3,1]'
 *
 * Given an integer array nums, return true if any value appears at least twice
 * in the array, and return false if every element is distinct.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,2,3,1]
 *
 * Output: true
 *
 * Explanation:
 *
 * The element 1 occurs at the indices 0 and 3.
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [1,2,3,4]
 *
 * Output: false
 *
 * Explanation:
 *
 * All elements are distinct.
 *
 *
 * Example 3:
 *
 *
 * Input: nums = [1,1,1,3,3,4,3,2,4,2]
 *
 * Output: true
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^5
 * -10^9 <= nums[i] <= 10^9
 *
 *
 */

// @lc code=start
#include <algorithm>
class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    // method 1
    // Your runtime beats 96.1 % of cpp submissions
    // Your memory usage beats 79.17 % of cpp submissions (71.1 MB)

    if (nums.size() < 2) {
      return false;
    }
    std::sort(nums.begin(), nums.end());
    for (size_t i = 1; i < nums.size(); ++i) {
      if (nums[i] == nums[i - 1]) return true;
    }
    return false;

    // method 2
    // Your runtime beats 14.01 % of cpp submissions
    // Your memory usage beats 6.57 % of cpp submissions (95.1 MB)
    // set<int> store(nums.begin(), nums.end());
    // if (store.size() == nums.size()) return false;
    //     return true;
  }
};
// @lc code=end
