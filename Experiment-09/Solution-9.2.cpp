/*      Problem 2

Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].
You may return the answer in any order.

Example 1:
Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
Explanation: There are 4 choose 2 = 6 total combinations.
Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.

Example 2:
Input: n = 1, k = 1
Output: [[1]]
Explanation: There is 1 choose 1 = 1 total combination.
*/

//  https://leetcode.com/problems/combinations/description/
class Solution {
    public:
        vector<vector<int>> res;
        vector<int> x;
        vector<vector<int>>& combine(int n, int k, int start=1) {
            if(k==0) res.push_back(x);
            else
                for(int i=start; i<=n-k+1; i++) {
                    x.push_back(i);
                    combine(n,k-1,i+1);
                    x.pop_back();
                }
            return res;
        }
    };