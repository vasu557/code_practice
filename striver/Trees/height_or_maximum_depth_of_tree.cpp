
///heigth of the tree;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr ) return 0;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return 1+max(lh,rh);
    }
};
-------------
//doing level_order_traversal
class Solution {
public:
vector<vector<int>>ans;
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>ins;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left != nullptr) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);
                ins.push_back(temp->val);
            }
            ans.push_back(ins);
        }
        return ans.size();
    }
};
