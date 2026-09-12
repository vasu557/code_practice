class Solution {
public:
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL) return ans;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp = st.top();
            ans.push_back(temp->val);
            st.pop();
            if(temp->right != nullptr)
            st.push(temp->right);
            if(temp->left != nullptr)
            st.push(temp->left);
        }
    return ans;
    }
};

