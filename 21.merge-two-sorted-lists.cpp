// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem21.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (66.94%)
 * Likes:    23622
 * Dislikes: 2317
 * Total Accepted:    5.4M
 * Total Submissions: 8.1M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * You are given the heads of two sorted linked lists list1 and list2.
 *
 * Merge the two lists into one sorted list. The list should be made by
 * splicing together the nodes of the first two lists.
 *
 * Return the head of the merged linked list.
 *
 *
 * Example 1:
 *
 *
 * Input: list1 = [1,2,4], list2 = [1,3,4]
 * Output: [1,1,2,3,4,4]
 *
 *
 * Example 2:
 *
 *
 * Input: list1 = [], list2 = []
 * Output: []
 *
 *
 * Example 3:
 *
 *
 * Input: list1 = [], list2 = [0]
 * Output: [0]
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in both lists is in the range [0, 50].
 * -100 <= Node.val <= 100
 * Both list1 and list2 are sorted in non-decreasing order.
 *
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
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // list1 as return
    // pop list2 element to insert inside
    // p1,p2
    // 1 3 4
    // 1 2 4
    // general: if 1(l1) <= 2(l2) < 3(l1), else p1++
    // special:
    // beginning: if 2(l1) >= 1(l2), else p1++
    // end: if l2 finished before l1, good nothing to consider
    //      if l2 unfinished before l1, add l2 to end of l1
    //
    // pseudo code:
    // while (p2->next is not null)
    //  if p1== list1:
    //      if p1.val > p2.val: insert p2 before p1
    //      else: p1 = p1->next
    // else if p1->next == nullptr:
    //        p1->next = p2; break;
    // else:
    //     if p1.val <= p2.val && p1->next.val >p2.val: insert p2 before
    //     p1->next else: p1= p1->next;
    //

    // edge case
    if (list1 == nullptr) {
      return list2;
    }

    ListNode* p1 = list1;
    ListNode* p2 = list2;
    ListNode* temp = nullptr;
    int tempV = 0;
    while (p2 != nullptr) {
      if (p1 == list1 && p1->val >= p2->val) {
        // insert
        auto p2_next = p2->next;
        list1 = p2;
        p2->next = p1;
        p2 = p2_next;
        p1 = list1;
      } else if (p1->next == nullptr) {
        p1->next = p2;
        break;
      } else if (p1->val < p2->val && p1->next->val >= p2->val) {
        // insert
        auto p1_next = p1->next;
        auto p2_next = p2->next;
        p1->next = p2;
        p2->next = p1_next;
        p2 = p2_next;
      } else {
        p1 = p1->next;
      }
    }

    return list1;
  }
};
// @lc code=end
