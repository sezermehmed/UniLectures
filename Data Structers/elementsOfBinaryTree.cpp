// Make a function which counts the elements in Binary Tree
#include<stdlib.h>
#include<stdio.h>
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

int countNodes(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    else {
        return 1 + countNodes(root->left) + countNodes(root->right);     // The Function
    }
}

int  main() {
    countNodes;
    return 0;
}
