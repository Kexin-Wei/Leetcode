// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem48.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 *
 * https://leetcode.com/problems/rotate-image/description/
 *
 * algorithms
 * Medium (78.04%)
 * Likes:    18858
 * Dislikes: 906
 * Total Accepted:    2.4M
 * Total Submissions: 3M
 * Testcase Example:  '[[1,2,3],[4,5,6],[7,8,9]]'
 *
 * You are given an n x n 2D matrix representing an image, rotate the image by
 * 90 degrees (clockwise).
 *
 * You have to rotate the image in-place, which means you have to modify the
 * input 2D matrix directly. DO NOT allocate another 2D matrix and do the
 * rotation.
 *
 *
 * Example 1:
 *
 *
 * Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 * Output: [[7,4,1],[8,5,2],[9,6,3]]
 *
 *
 * Example 2:
 *
 *
 * Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
 * Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 *
 *
 *
 * Constraints:
 *
 *
 * n == matrix.length == matrix[i].length
 * 1 <= n <= 20
 * -1000 <= matrix[i][j] <= 1000
 *
 *
 */

// @lc code=start
#include <algorithm>
class Solution {
 public:
  void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // transpose
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < i; ++j) {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      }
    }
    // reverse
    for (int i = 0; i < n; ++i) {
      std::reverse(matrix[i].begin(), matrix[i].end());
    }
  }
};
// @lc code=end
