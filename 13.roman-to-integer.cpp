// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem13.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 *
 * https://leetcode.com/problems/roman-to-integer/description/
 *
 * algorithms
 * Easy (64.76%)
 * Likes:    15877
 * Dislikes: 1090
 * Total Accepted:    4.8M
 * Total Submissions: 7.4M
 * Testcase Example:  '"III"'
 *
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D
 * and M.
 * 
 * 
 * Symbol       Value
 * I             1
 * V             5
 * X             10
 * L             50
 * C             100
 * D             500
 * M             1000
 * 
 * For example, 2 is written as II in Roman numeral, just two ones added
 * together. 12 is written as XII, which is simply X + II. The number 27 is
 * written as XXVII, which is XX + V + II.
 * 
 * Roman numerals are usually written largest to smallest from left to right.
 * However, the numeral for four is not IIII. Instead, the number four is
 * written as IV. Because the one is before the five we subtract it making
 * four. The same principle applies to the number nine, which is written as IX.
 * There are six instances where subtraction is used:
 * 
 * 
 * I can be placed before V (5) and X (10) to make 4 and 9. 
 * X can be placed before L (50) and C (100) to make 40 and 90. 
 * C can be placed before D (500) and M (1000) to make 400 and 900.
 * 
 * 
 * Given a roman numeral, convert it to an integer.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: s = "III"
 * Output: 3
 * Explanation: III = 3.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "LVIII"
 * Output: 58
 * Explanation: L = 50, V= 5, III = 3.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: s = "MCMXCIV"
 * Output: 1994
 * Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length <= 15
 * s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
 * It is guaranteed that s is a valid roman numeral in the range [1, 3999].
 * 
 * 
 */

// @lc code=start
#include <cstring>

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        char lastChar = '\0';
        for (char& c: s)
        {
            switch (c)
            {
            case 'I':
                num += 1;
                break;
            case 'V':
                num +=5 ;
                if (lastChar == 'I') num -=2;
                break;
            case 'X':
                num += 10;
                if (lastChar == 'I') num -=2;
                break;
            case 'L':
                num += 50;
                if (lastChar == 'X') num -= 20;
                break;
            case 'C':
                num += 100;
                if (lastChar == 'X') num -= 20;
                break;
            case 'D':
                num += 500;
                if (lastChar == 'C') num -= 200;
                break;
            case 'M':
                num += 1000;
                if (lastChar == 'C') num -= 200;
                break;
            default:
                break;
            }
            lastChar = c;
        }
        return num;
    }
};
// @lc code=end

