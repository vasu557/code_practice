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
int main(){
	Node* root = new Node(1);
	root->left = new Node(20);
	root->right=new Node(30);
	root->left->left = new Node(15);
	root->left->right = new Node(11);
	root->right->left = new Node(32);
	root->right->right = new Node(60);
	
	
	vector<int>ans;
	if(root == NULL) return 0;
	
	map<int,int>mpp;
	//queue<pair<Node*,int>>q;
	  queue<pair<Node*, int>> q;
	q.push({root,0});
	while(!q.empty()){
		auto it = q.front();
		q.pop();
		Node* temp = it.first;
		int line = it.second;
		if(mpp.find(line) == mpp.end()) mpp[line] = temp->data; 
		if(temp->left) q.push({temp->left,line-1});
		if(temp->right) q.push({temp->right,line+1});
	}
	for(auto it : mpp){
		ans.push_back(it.second);
	}
	for(auto it : ans){
		cout<<it<<" ";
	}
	
	return 0;
}
