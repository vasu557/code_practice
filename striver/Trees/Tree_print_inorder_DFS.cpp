#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data ;
	 Node* left;
	 Node* right;
	Node(int val){
		data = val;
		left = right = NULL;
	}
};
void inorder(Node *root){
	if(root == NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(Node* node){
	if(node == NULL) return ;
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}
void postorder(Node* node){
	if(node == NULL) return ;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<" ";
}
int main(){
	Node* root = new Node(1);
	root->left = new Node(3);
	root->right = new Node(5);
	cout<<" INORDER :";
	inorder(root);
	cout<<endl;
	cout<<"POSTORDER : ";
	preorder(root);
	cout<<endl;
	postorder(root);
	return 0;
}
