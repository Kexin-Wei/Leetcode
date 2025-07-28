// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem102.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal/description/
 *
 * algorithms
 * Medium (70.92%)
 * Likes:    16357
 * Dislikes: 353
 * Total Accepted:    2.9M
 * Total Submissions: 4.1M
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given the root of a binary tree, return the level order traversal of its
 * nodes' values. (i.e., from left to right, level by level).
 *
 *
 * Example 1:
 *
 *
 * Input: root = [3,9,20,null,null,15,7]
 * Output: [[3],[9,20],[15,7]]
 *
 *
 * Example 2:
 *
 *
 * Input: root = [1]
 * Output: [[1]]
 *
 *
 * Example 3:
 *
 *
 * Input: root = []
 * Output: []
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in the tree is in the range [0, 2000].
 * -1000 <= Node.val <= 1000
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
class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    if (root == nullptr) return {};
    vector<TreeNode*> currentLayer{root}, nextLayer;
    vector<vector<int>> result;
    vector<int> currentLayerVal;
    while (1) {
      getNextLayer(currentLayer, nextLayer, currentLayerVal);
      result.push_back(currentLayerVal);
      if (nextLayer.size() == 0) break;
      currentLayer = nextLayer;
    }
    return result;
  }
  void getNextLayer(vector<TreeNode*> currentLayer,
                    vector<TreeNode*>& nextLayer,
                    vector<int>& currentLayerVal) {
    nextLayer.clear();
    currentLayerVal.clear();
    for (auto node : currentLayer) {
      if (node == nullptr) continue;
      currentLayerVal.push_back(node->val);
      if (node->left != nullptr) nextLayer.push_back(node->left);
      if (node->right != nullptr) nextLayer.push_back(node->right);
    }
  }
};
// @lc code=end
