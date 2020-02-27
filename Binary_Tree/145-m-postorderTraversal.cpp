// Definition for a binary tree node.
#include <vector> 

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
 
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postTraversal(root, v);
        return v;
    }
    
    void postTraversal(TreeNode* root, vector<int>& v) {
        if(!root)
            return;
        postTraversal(root->left, v);
        postTraversal(root->right, v);
        v.push_back(root->val);
    }
};