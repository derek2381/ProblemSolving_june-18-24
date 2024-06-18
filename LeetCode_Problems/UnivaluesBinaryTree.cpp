// problem link
// https://leetcode.com/problems/univalued-binary-tree/description/


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
    void check(TreeNode* root, set<int>& st){
        if(!root){
            return ;
        }

        check(root->left, st);
        st.insert(root->val);
        check(root->right, st);
    }

    bool isUnivalTree(TreeNode* root) {
        set<int> st;
        check(root, st);

        if(st.size() == 1){
            return true;
        }else{
            return false;
        }
    }
};
