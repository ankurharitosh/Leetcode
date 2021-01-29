/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr) return root;
        
        Node *curr=root, *start, *node;
        
        while(curr){
            start = nullptr;
            while(curr){
                if(curr->left){
                    if(start == nullptr)
                        start = curr->left;
                    else
                        node->next = curr->left;
                    node = curr->left;
                }
                
                if(curr->right){
                    if(start == nullptr)
                        start = curr->right;
                    else
                        node->next = curr->right;
                    node = curr->right;
                }
                
                curr = curr->next;
            }
            
            curr=start;
        }
        
        return root;
    }
};
