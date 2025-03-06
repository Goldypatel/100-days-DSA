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
        int maxDepth(TreeNode* root) {
        
            if(root == nullptr)return 0;
    
            return 1 + max(maxDepth(root->left), maxDepth(root->right));
        }
            
    };
    
    // vector<vector<int>> ans;
    //          helper(root, 0, ans);
    
    //         return ans.size();
            
    //     }
    
    //     void helper(TreeNode* root , int level , vector<vector<int>>& ans){
    
    //         if (root == nullptr) return;
            
    //         if (ans.size() <= level) {
    //             ans.push_back({});
    //         }
    
    //         ans[level].push_back(root->val);
            
    //         helper(root->left, level + 1, ans);
    //         helper(root->right, level + 1, ans); 
    //     }
    
    