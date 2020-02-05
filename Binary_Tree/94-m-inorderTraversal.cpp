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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inTraversal(root, v);
        return v;
    }
    void inTraversal(TreeNode* root, vector<int>& v) {
        if (!root)
            return;
        inTraversal(root->left, v);
        v.push_back(root->val);
        inTraversal(root->right, v);
    }
};