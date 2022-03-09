129. Sum Root to Leaf Numbers
Medium

3922

77

Add to List

Share
You are given the root of a binary tree containing digits from 0 to 9 only.

Each root-to-leaf path in the tree represents a number.

For example, the root-to-leaf path 1 -> 2 -> 3 represents the number 123.
Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.

A leaf node is a node with no children.

 

Example 1:


Input: root = [1,2,3]
Output: 25
Explanation:
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.
Therefore, sum = 12 + 13 = 25.
Example 2:


Input: root = [4,9,0,5,1]
Output: 1026
Explanation:
The root-to-leaf path 4->9->5 represents the number 495.
The root-to-leaf path 4->9->1 represents the number 491.
The root-to-leaf path 4->0 represents the number 40.
Therefore, sum = 495 + 491 + 40 = 1026.
 

Constraints:

The number of nodes in the tree is in the range [1, 1000].
0 <= Node.val <= 9
The depth of the tree will not exceed 10.



/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public: int sumNumbers(TreeNode* root) {
         // int cursum =0;
        if(root== nullptr) return 0;
        int totalsum =0;
        return  totalSum(root,0,totalsum);
       // return totalsum;
         
  
    }
     int  totalSum(TreeNode* &root,int cursum,int totalsum){
        int curval= cursum*10 + root->val; 
        
        if(root->left==nullptr && root->right==nullptr){
            totalsum +=curval;
               cout<<totalsum<<endl;
               return  totalsum;
        }
        int leftsum =0;
         int rightsum=0 ;
         //here the curval is basically cur Node val + previous Node val
         //the idea is to add all node values until we reach out leaf node and add the sum uptil now-
         //to finalsum
        if(root->left !=nullptr)  leftsum=  totalSum(root->left,curval,totalsum);
        if(root->right !=nullptr) rightsum = totalSum(root->right,curval,totalsum);
        //the sum form the left call + the sum from right call is stored as final       

         int finalsum = leftsum +rightsum ;
         return finalsum;
   
    }
    
};