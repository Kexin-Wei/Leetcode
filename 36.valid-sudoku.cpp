// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem36.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 *
 * https://leetcode.com/problems/valid-sudoku/description/
 *
 * algorithms
 * Medium (62.39%)
 * Likes:    11620
 * Dislikes: 1211
 * Total Accepted:    2M
 * Total Submissions: 3.3M
 * Testcase Example:
 * '[["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]'
 *
 * Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be
 * validated according to the following rules:
 *
 *
 * Each row must contain the digits 1-9 without repetition.
 * Each column must contain the digits 1-9 without repetition.
 * Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9
 * without repetition.
 *
 *
 * Note:
 *
 *
 * A Sudoku board (partially filled) could be valid but is not necessarily
 * solvable.
 * Only the filled cells need to be validated according to the mentioned
 * rules.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: board =
 * [["5","3",".",".","7",".",".",".","."]
 * ,["6",".",".","1","9","5",".",".","."]
 * ,[".","9","8",".",".",".",".","6","."]
 * ,["8",".",".",".","6",".",".",".","3"]
 * ,["4",".",".","8",".","3",".",".","1"]
 * ,["7",".",".",".","2",".",".",".","6"]
 * ,[".","6",".",".",".",".","2","8","."]
 * ,[".",".",".","4","1","9",".",".","5"]
 * ,[".",".",".",".","8",".",".","7","9"]]
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: board =
 * [["8","3",".",".","7",".",".",".","."]
 * ,["6",".",".","1","9","5",".",".","."]
 * ,[".","9","8",".",".",".",".","6","."]
 * ,["8",".",".",".","6",".",".",".","3"]
 * ,["4",".",".","8",".","3",".",".","1"]
 * ,["7",".",".",".","2",".",".",".","6"]
 * ,[".","6",".",".",".",".","2","8","."]
 * ,[".",".",".","4","1","9",".",".","5"]
 * ,[".",".",".",".","8",".",".","7","9"]]
 * Output: false
 * Explanation: Same as Example 1, except with the 5 in the top left corner
 * being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it
 * is invalid.
 *
 *
 *
 * Constraints:
 *
 *
 * board.length == 9
 * board[i].length == 9
 * board[i][j] is a digit 1-9 or '.'.
 *
 *
 */

// @lc code=start
#include <unordered_map>
class Solution {
 public:
  bool isValidSudoku(vector<vector<char>>& board) {
    std::unordered_map<char, std::vector<std::pair<int, int>>> char_to_idx;
    for (int i = 0; i < 9; ++i) {
      for (int j = 0; j < 9; ++j) {
        if (board[i][j] == '.') {
          continue;
        }
        if (char_to_idx.find(board[i][j]) != char_to_idx.end()) {
          int box_i_range[2] = {(i / 3) * 3, (i / 3) * 3 + 2};
          int box_j_range[2] = {(j / 3) * 3, (j / 3) * 3 + 2};
          for (auto idx : char_to_idx[board[i][j]]) {
            if (idx.first == i || idx.second == j ||  // row & column
                (idx.first >= box_i_range[0] && idx.first <= box_i_range[1] &&
                 idx.second >= box_j_range[0] &&
                 idx.second <= box_j_range[1])) {  // box
              return false;
            }
            char_to_idx[board[i][j]].push_back(std::pair<int, int>{i, j});
          }
        } else {
          char_to_idx[board[i][j]] =
              std::vector<std::pair<int, int>>{std::pair<int, int>{i, j}};
        }
      }
    }
    return true;
  }
};
// @lc code=end
