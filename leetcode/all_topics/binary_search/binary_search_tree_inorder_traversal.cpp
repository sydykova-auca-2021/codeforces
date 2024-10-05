#include <bits/stdc++.h>

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
    std::vector<int> inorderTraversal(TreeNode* root){
        std::vector<int> res;
        inorderHelper(root, res);
        return res;
    }

    void inorderHelper(TreeNode* root, std::vector<int>& res) {
        if (root == nullptr) {
            return;
        }

        inorderHelper(root->left, res);

        res.push_back(root->val);

        inorderHelper(root->right, res);
    }
};

int main(){
    Solution solution;

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    std::vector<int> res = solution.inorderTraversal(root);

    for(int i = 0; i < res.size(); ++i){
        std::cout << res[i] << " ";
    }

    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}