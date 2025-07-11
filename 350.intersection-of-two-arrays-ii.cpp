// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem350.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 *
 * https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
 *
 * algorithms
 * Easy (59.11%)
 * Likes:    7940
 * Dislikes: 995
 * Total Accepted:    1.6M
 * Total Submissions: 2.7M
 * Testcase Example:  '[1,2,2,1]\n[2,2]'
 *
 * Given two integer arrays nums1 and nums2, return an array of their
 * intersection. Each element in the result must appear as many times as it
 * shows in both arrays and you may return the result in any order.
 *
 *
 * Example 1:
 *
 *
 * Input: nums1 = [1,2,2,1], nums2 = [2,2]
 * Output: [2,2]
 *
 *
 * Example 2:
 *
 *
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [4,9]
 * Explanation: [9,4] is also accepted.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums1.length, nums2.length <= 1000
 * 0 <= nums1[i], nums2[i] <= 1000
 *
 *
 *
 * Follow up:
 *
 *
 * What if the given array is already sorted? How would you optimize your
 * algorithm?
 * What if nums1's size is small compared to nums2's size? Which algorithm is
 * better?
 * What if elements of nums2 are stored on disk, and the memory is limited such
 * that you cannot load all elements into the memory at once?
 *
 *
 */

// @lc code=start
#include <algorithm>
class Solution {
 public:
  std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    // Your runtime beats 30.77 % of cpp submissions
    // Your memory usage beats 98.01 % of cpp submissions (14.1 MB)
    std::vector<int> its;
    for (const auto& first : nums1) {
      std::vector<int>::iterator it =
          std::find(nums2.begin(), nums2.end(), first);
      if (it != nums2.end()) {
        its.push_back(first);
        nums2.erase(it);
      }
    }
    return its;
  }
};
// @lc code=end
