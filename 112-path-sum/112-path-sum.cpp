/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int target) {
        if (root == nullptr)
            return 0;
        else if(root->val == target && root->left == nullptr && root->right == nullptr){
            return 1;
        }
        else{
            int newtarget = target - root->val;
            return hasPathSum(root->left,newtarget) || hasPathSum(root->right,newtarget);
        }
    }
};