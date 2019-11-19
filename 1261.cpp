/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class FindElements {
    unordered_set<int> ht;
public:
    void helper(TreeNode* root, int x, int child){
        if(root==nullptr) return;
        if(child==0)    
            root->val=2*x+1;
        else
            root->val=2*x+2;
        ht.insert(root->val);
        helper(root->left, root->val, 0);
        helper(root->right, root->val, 1);
    }
    FindElements(TreeNode* root) {
       if(root==nullptr) return;
        root->val=0;
        ht.insert(root->val);
        helper(root->left, root->val, 0);
        helper(root->right, root->val, 1);
    }
    
    
    bool find(int target) {
        if(ht.find(target)!=ht.end())
            return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
