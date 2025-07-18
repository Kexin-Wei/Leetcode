// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem28.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 *
 * https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
 *
 * algorithms
 * Easy (45.08%)
 * Likes:    6853
 * Dislikes: 511
 * Total Accepted:    3.4M
 * Total Submissions: 7.6M
 * Testcase Example:  '"sadbutsad"\n"sad"'
 *
 * Given two strings needle and haystack, return the index of the first
 * occurrence of needle in haystack, or -1 if needle is not part of
 * haystack.
 *
 *
 * Example 1:
 *
 *
 * Input: haystack = "sadbutsad", needle = "sad"
 * Output: 0
 * Explanation: "sad" occurs at index 0 and 6.
 * The first occurrence is at index 0, so we return 0.
 *
 *
 * Example 2:
 *
 *
 * Input: haystack = "leetcode", needle = "leeto"
 * Output: -1
 * Explanation: "leeto" did not occur in "leetcode", so we return -1.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= haystack.length, needle.length <= 10^4
 * haystack and needle consist of only lowercase English characters.
 *
 *
 */

// @lc code=start
class Solution {
 public:
  int strStr(string haystack, string needle) {
    if (haystack.size() < needle.size()) return -1;
    int i = 0;
    int j = 0;
    int start_idx = -1;
    bool start = false;
    bool matched = false;
    while (i < haystack.size()) {
      if (haystack[i] == needle[j]) {
        if (!start) {
          start = true;
          start_idx = i;
        }
        j++;
        if (j >= needle.size()) {
          // successfuly matched
          j = 0;
          start = false;
          matched = true;
          break;
        }
      } else if (start) {
        // failed matched
        j = 0;
        start = false;
        i = start_idx;
        start_idx = -1;
      }
      ++i;
    }
    if (!matched) start_idx = -1;
    return start_idx;
  }
};
// @lc code=end
