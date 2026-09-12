#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};
bool found;
void getPath(Node* root,vector<int>&arr,int x){
	if(root == NULL || found == true){
		return;
	}
	arr.push_back(root->data);
	if(root->data == x){
		found = true;
		return;
	}
	getPath(root->left,arr,x);
	getPath(root->right,arr,x);
	if(!found )  // found == false(meaning)
	arr.pop_back();
}
int findLCA(Node* root,int a,int b){
	vector<int>arr,vec;
	found =false;
	getPath(root,arr,a);
	found = false;
	getPath(root,vec,b);
	int lca = -1;
	for(int i=0;i<min(arr.size(),vec.size());i++){
		if(arr[i] == vec[i]){
			lca = arr[i];
		}
		else{
			break;
		}
	}
	return lca;
}
int main(){
	Node * root = new Node(1);
	root->left = new Node(2);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->left->right->left = new Node(6);
	root->left->right->right = new Node(7);
	root->right = new Node(3);
	root->right->left =  new Node(8);
	root->right->right = new Node(9);
	int lca = findLCA(root,4,7);
	cout<<lca;
	return 0;
}





//optimal

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root== nullptr) return root;
        if(root == nullptr || root == p || root == q){
            return root;
        }
        TreeNode* left =lowestCommonAncestor(root->left,p,q);
        TreeNode* right =lowestCommonAncestor(root->right,p,q);
        if(left == nullptr) return right;
        else if(right == nullptr) return left;
        else return root;

    }
};
