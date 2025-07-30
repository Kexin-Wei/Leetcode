// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem70.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 *
 * https://leetcode.com/problems/climbing-stairs/description/
 *
 * algorithms
 * Easy (53.61%)
 * Likes:    23438
 * Dislikes: 973
 * Total Accepted:    4.4M
 * Total Submissions: 8.2M
 * Testcase Example:  '2'
 *
 * You are climbing a staircase. It takes n steps to reach the top.
 *
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can
 * you climb to the top?
 *
 *
 * Example 1:
 *
 *
 * Input: n = 2
 * Output: 2
 * Explanation: There are two ways to climb to the top.
 * 1. 1 step + 1 step
 * 2. 2 steps
 *
 *
 * Example 2:
 *
 *
 * Input: n = 3
 * Output: 3
 * Explanation: There are three ways to climb to the top.
 * 1. 1 step + 1 step + 1 step
 * 2. 1 step + 2 steps
 * 3. 2 steps + 1 step
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= n <= 45
 *
 *
 */

// @lc code=start
#include <map>
class Solution {
 public:
  // std::map<int, int> n_to_ways = {{1, 1}, {2, 2}};
  int climbStairs(int n) {
    // if (n_to_ways.find(n) != n_to_ways.end()) return n_to_ways[n];

    // int ways{0};

    // if (n - 1 > 0) {
    //   std::cout << " - ";
    //   ways += climbStairs(n - 1);
    // }

    // if (n - 2 > 0) {
    //   std::cout << " - ";
    //   ways += climbStairs(n - 2);
    // }
    // std::cout << endl;
    // n_to_ways[n] = ways;
    // return ways;
    int prev1{1}, prev2{1}, dp;
    for (int i = 2; i <= n; ++i) {
      dp = prev1 + prev2;
      prev2 = prev1;
      prev1 = dp;
    }
    return prev1;
  }
};
// @lc code=end
