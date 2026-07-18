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
   int sum(TreeNode* root, int cur){
    if(root==nullptr) return 0;
    cur=cur*10+root->val;
    if(root->left == NULL &&
root->right == NULL){
    return cur;
}
int lh= sum(root->left,cur);
int rh= sum(root->right,cur);
 return lh+rh;
   }
    int sumNumbers(TreeNode* root) {
        return sum(root,0);
    }
};