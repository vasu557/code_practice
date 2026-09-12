#include <bits/stdc++.h>
using namespace std;

// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
  public:
  void addLeft(Node* root,vector<int>&vec){
      Node* cur = root->left;
      while(cur){
          if(!isLeaf(cur))  vec.push_back(cur->data);
          if(cur->left) cur = cur->left;
          else cur= cur->right;
      }
  }
  void addLeaf(Node* root,vector<int>&vec){
      if(isLeaf(root)) {
          vec.push_back(root->data);
          return;
      }
      if(root->left) addLeaf(root->left,vec);
      if(root->right) addLeaf(root->right,vec);
  }
  void addRight(Node* root,vector<int>&vec){
      Node* cur = root->right;
      vector<int>temp;
      while(cur){
          if(!isLeaf(cur)) temp.push_back(cur->data);
          if(cur->right) cur = cur->right;
          else cur = cur->left;
      }
      int n=temp.size();
      for(int i=n-1;i>=0;i--){
          vec.push_back(temp[i]);
      }
  }
  bool isLeaf(Node* root){
      return (root != nullptr && root->left == nullptr && root->right == nullptr);
  }
  vector<int> boundaryTraversal(Node *root) {
      vector<int> ans;
      if(!root) return ans;
      if(!isLeaf(root)) ans.push_back(root->data);
      addLeft(root,ans);
      addLeaf(root,ans);
      addRight(root,ans);
      return ans;
  }
};

// ----------------- Main function -----------------
int main() {
    /*
        Example Tree:
               1
              / \
             2   3
            / \   \
           4   5   6
              / \
             7   8
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);
    root->right->right = new Node(6);

    Solution sol;
    vector<int> boundary = sol.boundaryTraversal(root);

    cout << "Boundary Traversal: ";
    for(int val : boundary) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

