// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem108.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
 *
 * https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
 *
 * algorithms
 * Easy (74.29%)
 * Likes:    11549
 * Dislikes: 613
 * Total Accepted:    1.5M
 * Total Submissions: 2M
 * Testcase Example:  '[-10,-3,0,5,9]'
 *
 * Given an integer array nums where the elements are sorted in ascending
 * order, convert it to a height-balanced binary search tree.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [-10,-3,0,5,9]
 * Output: [0,-3,9,-10,null,5]
 * Explanation: [0,-10,5,null,-3,null,9] is also accepted:
 *
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [1,3]
 * Output: [3,1]
 * Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^4
 * -10^4 <= nums[i] <= 10^4
 * nums is sorted in a strictly increasing order.
 *
 *
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <iostream>
class Solution {
 public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    // first_half, mid, last_half
    // left, node, right
    // in left:
    //    first_half_of_first_half, mid_of_first_half, last_half_of_first_half
    //     left, node, right
    // similarly, in right
    // recursive program
    // TreeNode* addNums(vec)
    //   if nums.size()==0 return nullptr
    //   idxF, idxM, idxL = 0, len/2, len
    //   TreeNode* node;
    //   node->val = vec[idxM]
    //   node->left = addNums(vec[idxF:idxM])
    //   node->right = addNums(vec[idxM:idxL])
    return sortedArrayToBST(nums, 0, nums.size());
  }

  TreeNode* sortedArrayToBST(vector<int>& nums, int firstIdx, int lastIdx) {
    int len = lastIdx - firstIdx;
    if (len == 0) return nullptr;
    int idxFront{firstIdx}, idxBack{lastIdx}, idxMid{firstIdx + len / 2};
    return new TreeNode(nums[idxMid], sortedArrayToBST(nums, idxFront, idxMid),
                        sortedArrayToBST(nums, idxMid + 1, idxBack));
  }
};
// @lc code=end
