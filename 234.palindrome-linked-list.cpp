// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem234.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 *
 * https://leetcode.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (56.02%)
 * Likes:    17559
 * Dislikes: 943
 * Total Accepted:    2.5M
 * Total Submissions: 4.5M
 * Testcase Example:  '[1,2,2,1]'
 *
 * Given the head of a singly linked list, return true if it is a palindrome or
 * false otherwise.
 *
 *
 * Example 1:
 *
 *
 * Input: head = [1,2,2,1]
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: head = [1,2]
 * Output: false
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in the list is in the range [1, 10^5].
 * 0 <= Node.val <= 9
 *
 *
 *
 * Follow up: Could you do it in O(n) time and O(1) space?
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
  bool isPalindrome(ListNode* head) {
    // if (head->next == nullptr) {
    //   return true;
    // }

    // std::vector<int> val;
    // ListNode* p = head;
    // while (p != nullptr) {
    //   val.push_back(p->val);
    //   p = p->next;
    // }

    // std::vector<int>::iterator front = val.begin();
    // std::vector<int>::iterator back = val.end() - 1;
    // while (front < back) {
    //   if (*front != *back) {
    //     return false;
    //   }
    //   front++;
    //   back--;
    // }
    // return true;

    // Use two pointers to find the middle of the list
    ListNode* slowPtr = head;
    ListNode* fastPtr = head->next;

    // Move fastPtr by two and slowPtr by one step
    // When fastPtr reaches the end, slowPtr will be at the middle
    while (fastPtr && fastPtr->next) {
      slowPtr = slowPtr->next;
      fastPtr = fastPtr->next->next;
    }

    // Reverse the second half of the list
    ListNode* prevNode = nullptr;
    ListNode* currentNode = slowPtr->next;
    while (currentNode) {
      ListNode* nextTemp = currentNode->next;
      currentNode->next = prevNode;
      prevNode = currentNode;
      currentNode = nextTemp;
    }

    // Compare the reversed second half with the first half
    while (prevNode) {
      // If the values are different, then it's not a palindrome
      if (prevNode->val != head->val) {
        return false;
      }
      // Move to the next nodes in both halves
      prevNode = prevNode->next;
      head = head->next;
    }

    // All values matched, so it is a palindrome
    return true;
  }
};
// @lc code=end
