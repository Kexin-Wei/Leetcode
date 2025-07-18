// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem19.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 *
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
 *
 * algorithms
 * Medium (49.15%)
 * Likes:    20209
 * Dislikes: 863
 * Total Accepted:    3.6M
 * Total Submissions: 7.3M
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * Given the head of a linked list, remove the n^th node from the end of the
 * list and return its head.
 *
 *
 * Example 1:
 *
 *
 * Input: head = [1,2,3,4,5], n = 2
 * Output: [1,2,3,5]
 *
 *
 * Example 2:
 *
 *
 * Input: head = [1], n = 1
 * Output: []
 *
 *
 * Example 3:
 *
 *
 * Input: head = [1,2], n = 1
 * Output: [1]
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in the list is sz.
 * 1 <= sz <= 30
 * 0 <= Node.val <= 100
 * 1 <= n <= sz
 *
 *
 *
 * Follow up: Could you do this in one pass?
 *
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
 public:
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    vector<ListNode*> lists;
    ListNode* node = head;
    while (node->next != nullptr) {
      lists.push_back(node);
      node = node->next;
    }
    if (n == 1) {
      if (lists.empty()) return nullptr;
      lists[lists.size() - 1]->next = nullptr;
    } else {
      int delete_idx = lists.size() - n + 1;
      lists[delete_idx]->val = lists[delete_idx]->next->val;
      lists[delete_idx]->next = lists[delete_idx]->next->next;
    }
    return lists[0];
  }
};
// @lc code=end
