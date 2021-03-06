#include <cmath>

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
    int countNodes(TreeNode* root) {
        int hr=0;
        int hl=0;
        TreeNode* l = root;
        TreeNode* r = root;
        while(l!=nullptr){
            l = l->left;
            hl++;
        }
        while(r!=nullptr){
            r = r->right;
            hr++;
        }
        if (hl == hr) {
            return pow(2,hl) - 1;
        }
        
        return 1 + countNodes(root->right) + countNodes(root->left);
    }
};