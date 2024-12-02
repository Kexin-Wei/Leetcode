/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <iostream>
#include <vector>

using namespace std;
class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    vector<int> v, reverse;
    while (x != 0) {
      int res = x % 10;
      v.push_back(res);
      reverse.insert(reverse.begin(), res);
      x = x / 10;
    }
    return (v == reverse);
  }
};
// @lc code=end

int main() {
  Solution s;
  cout << s.isPalindrome(121) << endl;
  cout << s.isPalindrome(-121) << endl;
  cout << s.isPalindrome(10) << endl;

  return 0;
}