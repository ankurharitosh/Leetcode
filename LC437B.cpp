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
    int subpathsum(TreeNode* root, int sum_so_far, int sum, unordered_map<int, int> &ht){
        if(root==nullptr) return 0;
        
        root->val+=sum_so_far; // Prefix sum
        
        int count = (root->val == sum) + (ht.count(root->val-sum)?ht[root->val-sum]:0);
        ht[root->val]++;
        count+= subpathsum(root->left, root->val, sum, ht) + subpathsum(root->right, root->val, sum, ht);
        ht[root->val]--;
        return count;
    } 
    int pathSum(TreeNode* root, int sum) {
        if(root == nullptr) return 0;
        unordered_map<int, int> ht;
        return subpathsum(root, 0, sum, ht);
    }
};
