class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>>ans;
        if(root == nullptr) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool lft = true; ( lft = left  to right)
        while(!q.empty()){
            int n=q.size();
            vector<int>ins(n);
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                int index = lft ? i : (n-1-i);
                ins[index] = temp->val;
                if(temp->left != nullptr) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);
            }
            lft = !lft;
            ans.push_back(ins);
        }
        return ans;
    }
};

-------------------------------------------
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root == NULL) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node ->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                level.push_back(node->val);
            }
            res.push_back(level);
        }
        for(int i=0;i<res.size();i++){
            if(i % 2 == 1)
            reverse(res[i].begin(),res[i].end());
        }
        return res;
    }
};
------------------
 1
 32
 456
 10 9 8 7
