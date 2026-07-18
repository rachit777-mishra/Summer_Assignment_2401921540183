
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
    bool check(TreeNode* root, long long min, long long max)
    
    {
        if(root == NULL)
        {
            return true;
        }

        if(min >= root->val || root->val >= max)
        {
            return false;
        }
        bool left_sub = check(root->left,min,root->val);
        bool right_sub = check(root->right,root->val,max);
        if(left_sub == true && right_sub == true )
        {
            return true;
        }

        return false;
        
      
    }
    bool isValidBST(TreeNode* root) {
        return check(root,LLONG_MIN,LLONG_MAX);
        
        
    }
};
