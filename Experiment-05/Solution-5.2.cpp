/*      Problem 2
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Example 1:
Input: root = [1,2,2,3,4,4,3]
Output: true

Example 2:
Input: root = [1,2,2,null,3,null,3]
Output: false

Constraints:
The number of nodes in the tree is in the range [1, 1000].
-100 <= Node.val <= 100

*/

// https://leetcode.com/problems/symmetric-tree/description/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        bool recurse(TreeNode * sub_left, TreeNode* sub_right){
            if (!sub_left && !sub_right) return true; // Both null, symmetric
            if (!sub_left || !sub_right) return false; // One is null, the other isn't
            if((sub_left->val)!=(sub_right->val))   
                return false;
            return recurse(sub_left->left,sub_right->right) && recurse(sub_left->right,sub_right->left);
        }
        bool isSymmetric(TreeNode* root) {
            if(!root)   return true;
            return recurse(root->left,root->right);
        }
};