// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem101.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
 *
 * https://leetcode.com/problems/symmetric-tree/description/
 *
 * algorithms
 * Easy (59.55%)
 * Likes:    16263
 * Dislikes: 423
 * Total Accepted:    2.5M
 * Total Submissions: 4.2M
 * Testcase Example:  '[1,2,2,3,4,4,3]'
 *
 * Given the root of a binary tree, check whether it is a mirror of itself
 * (i.e., symmetric around its center).
 *
 *
 * Example 1:
 *
 *
 * Input: root = [1,2,2,3,4,4,3]
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: root = [1,2,2,null,3,null,3]
 * Output: false
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in the tree is in the range [1, 1000].
 * -100 <= Node.val <= 100
 *
 *
 *
 * Follow up: Could you solve it both recursively and iteratively?
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
  bool isSymmetric(TreeNode* root) {
    // find by layers
    // get each layers by from left to right and adding up
    //     std::vector<TreeNode*> currentLayerNodes, nextLayerNodes;
    //     currentLayerNodes.push_back(root);

    //     while (getNextLayers(currentLayerNodes, nextLayerNodes)) {
    //       bool result = checkLayerSymmetric(nextLayerNodes);
    //       if (!result) return false;
    //       currentLayerNodes = nextLayerNodes;
    //     }
    //     return true;
    //   }

    //   bool getNextLayers(std::vector<TreeNode*> currentLayerNodes,
    //                      std::vector<TreeNode*>& nextLayerNodes) {
    //     // return true if has next layer
    //     nextLayerNodes.clear();
    //     bool hasNextLayer = false;
    //     for (auto node : currentLayerNodes) {
    //       if (node == nullptr) continue;
    //       nextLayerNodes.push_back(node->left);
    //       nextLayerNodes.push_back(node->right);
    //       if (!hasNextLayer && (node->left != nullptr || node->right !=
    //       nullptr))
    //         hasNextLayer = true;
    //     }
    //     return hasNextLayer;
    //   }

    //   bool checkLayerSymmetric(std::vector<TreeNode*> layerNodes) {
    //     std::vector<TreeNode*>::iterator front, back;
    //     front = layerNodes.begin();
    //     back = layerNodes.end() - 1;
    //     while (front <= back) {
    //       if ((*front == nullptr && *back != nullptr) ||
    //           (*front != nullptr && *back == nullptr)) {
    //         return false;
    //       } else if (*front == nullptr && *back == nullptr) {
    //         // do nothing
    //         std::cout << "nullptr" << endl;
    //       } else if ((*front)->val != (*back)->val) {
    //         return false;
    //       } else {
    //         std::cout << (*front)->val << ", " << (*back)->val << endl;
    //       }
    //       front++;
    //       back--;
    //     }
    //     return true;
    return isLeftSameAsRight(root, root);
  }
  bool isLeftSameAsRight(TreeNode* p, TreeNode* q) {
    if (!p || !q) return p == q;
    return p->val == q->val && isLeftSameAsRight(p->left, q->right) &&
           isLeftSameAsRight(p->right, q->left);
  }
};
// @lc code=end
