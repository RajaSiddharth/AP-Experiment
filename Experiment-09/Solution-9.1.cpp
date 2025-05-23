/*      Problem 1
Given an integer array nums of unique elements, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:
Input: nums = [0]
Output: [[],[0]]

Constraints:
1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.
 */
//  https://leetcode.com/problems/subsets/description/

class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> result = {{}};
            for (int num : nums) {
                int size = result.size();
                for (int i = 0; i < size; i++) {
                    vector<int> subset = result[i];
                    subset.push_back(num);
                    result.push_back(subset);
                }
            }
            return result;
        }
    };