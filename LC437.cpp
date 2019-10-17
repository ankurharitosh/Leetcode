/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int subpathsum(TreeNode* root, int sum_so_far, int sum){
        if(root==nullptr) return 0;
        int current = sum_so_far + root->val;
        return (current==sum) + subpathsum(root->left, current, sum) + subpathsum(root->right, current, sum) ;
    } 
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return 0;
        return subpathsum(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
};
