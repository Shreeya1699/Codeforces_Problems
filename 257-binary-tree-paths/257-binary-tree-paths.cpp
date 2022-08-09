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
    void helper(TreeNode* root, string temp,vector<string> &output ){
        if(!root)
            return;
        if(root->left ==nullptr && root->right == nullptr){
            temp=temp +to_string(root->val);
            output.push_back(temp);
            return;
        }
        helper(root->left,temp+to_string(root->val)+"->",output);
        helper(root->right,temp+to_string(root->val)+"->",output);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> output;
        string temp="";
        helper(root,temp,output);
        return output;
        
        
    }
};