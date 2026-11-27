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

    



void print1(TreeNode * root2   , vector<int>&roott2)

        {

        if(!root2)
            return;
        if(root2->right ==nullptr && root2->left == nullptr)
             roott2.push_back(root2->val);

        print1(root2->left,roott2);
        print1(root2->right,roott2);
        
        
        }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>asd;
        vector<int>as;

        print1(root1,asd);
        print1(root2,as);

        if(asd.size()!= as.size())
        return false;

        for (int i = 0; i <as.size(); ++i)
        {
            if (asd[i]!=as[i])
                return false;

        }
        return true;
    }



        
};