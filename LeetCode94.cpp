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

    void inorderProcess(vector<int> & order, TreeNode* node)
    {
        if( !node )
        {
            return;
        }

        inorderProcess(order,node->left); //visit left node

        order.push_back (node->val); //visit root

        inorderProcess(order,node->right); //visit right node

    }

    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> order;
        inorderProcess(order, root);
        return order;

    }
};
