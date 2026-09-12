class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == nullptr) return ans;
        stack<TreeNode*>st1,st2;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* temp = st1.top();
            st1.pop();
            if(temp->left != nullptr) st1.push(temp->left);
            if(temp->right != nullptr) st1.push(temp->right);
            st2.push(temp);
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
    return ans;
    }
};
