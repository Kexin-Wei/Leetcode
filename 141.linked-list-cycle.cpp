// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem141.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 *
 * https://leetcode.com/problems/linked-list-cycle/description/
 *
 * algorithms
 * Easy (52.83%)
 * Likes:    16686
 * Dislikes: 1515
 * Total Accepted:    4.1M
 * Total Submissions: 7.8M
 * Testcase Example:  '[3,2,0,-4]\n1'
 *
 * Given head, the head of a linked list, determine if the linked list has a
 * cycle in it.
 *
 * There is a cycle in a linked list if there is some node in the list that can
 * be reached again by continuously following the next pointer. Internally, pos
 * is used to denote the index of the node that tail's next pointer is
 * connected to. Note that pos is not passed as a parameter.
 *
 * Return true if there is a cycle in the linked list. Otherwise, return
 * false.
 *
 *
 * Example 1:
 *
 *
 * Input: head = [3,2,0,-4], pos = 1
 * Output: true
 * Explanation: There is a cycle in the linked list, where the tail connects to
 * the 1st node (0-indexed).
 *
 *
 * Example 2:
 *
 *
 * Input: head = [1,2], pos = 0
 * Output: true
 * Explanation: There is a cycle in the linked list, where the tail connects to
 * the 0th node.
 *
 *
 * Example 3:
 *
 *
 * Input: head = [1], pos = -1
 * Output: false
 * Explanation: There is no cycle in the linked list.
 *
 *
 *
 * Constraints:
 *
 *
 * The number of the nodes in the list is in the range [0, 10^4].
 * -10^5 <= Node.val <= 10^5
 * pos is -1 or a valid index in the linked-list.
 *
 *
 *
 * Follow up: Can you solve it using O(1) (i.e. constant) memory?
 *
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <algorithm>
#include <vector>
class Solution {
 public:
  bool hasCycle(ListNode* head) {
    // Your runtime beats 6.36 % of cpp submissions
    // Your memory usage beats 14.48 % of cpp submissions (12.9 MB)
    // std::vector<ListNode*> ps;
    // ListNode* p = head;
    // while (p != nullptr) {
    //   if (std::find(ps.begin(), ps.end(), p) != ps.end()) {
    //     return true;
    //   }
    //   ps.push_back(p);
    //   p = p->next;
    // }
    // return false;

    int count = 0;
    ListNode* p = head;
    while (p != nullptr) {
      if (count > 10000) {
        return true;
      }
      p = p->next;
      count++;
    }
    return false;
  }
};
// @lc code=end
