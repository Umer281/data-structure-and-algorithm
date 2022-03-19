102. Binary Tree Level Order Traversal
Medium

7614

152

Add to List

Share
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000



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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==nullptr){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            vector<int> nums;
            //this size basically stores the no of elements present at specofoc level,so that we can iterate over them 
            //and store them in our nums vector(list)
            //this size varaible is getting changed at every level,at first its value will be one and we push only the val 
            //of currentNode in the nums,and puhs the neighbours of currentNode in the q,at 2nd time the size()
            //value will be 2, becoz 3 contains 2 neighbours,and similarly so on
            int size = q.size();
            //here we are iterating over nodes of specific level 
            for(int i=0;i<size;i++){
               TreeNode*    currentNode = q.front();
               nums.push_back(currentNode->val);
                 q.pop();
                if(currentNode->left !=nullptr) q.push(currentNode->left);
                if(currentNode->right != nullptr) q.push(currentNode->right); 
               
            }
           
             ans.push_back(nums);
            
        }
        return ans;
    }
    
    
    
};