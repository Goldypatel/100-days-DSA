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
        bool isSameTree(TreeNode* p, TreeNode* q) {
            
           vector<int> ans1;
           vector<int> ans2;
            helper(p, ans1);
            helper(q, ans2);
            if(ans1.size()!=ans2.size()) return false;
            for(int i=0;i<ans1.size();i++){
                if(ans1[i]!=ans2[i]) return false;
            }
    
            return true;
        }
    
        void helper(TreeNode* root , vector<int>& ans ){
                if(root == nullptr) return;
                helper(root->left,ans);
                ans.push_back(root->val);
                helper(root->right,ans);
            }
    };