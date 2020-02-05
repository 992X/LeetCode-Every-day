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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preTraversal(root, v);
        return v;
    }
    void preTraversal(TreeNode* root, vector<int>& v) {
        if(!root)
            return;
        v.push_back(root->val);
        preTraversal(root->left, v);
        preTraversal(root->right, v);
    }
};


